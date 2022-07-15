use std::io;
use std::str::FromStr;
use std::collections::HashMap;
#[allow(dead_code)]
fn read_line() -> String {
    let mut buffer = String::new();
    io::stdin()
        .read_line(&mut buffer)
        .expect("failed to read line");

    buffer

}

#[allow(dead_code)]
fn read<T : FromStr>() -> Result<T, T::Err>{
    read_line().trim().parse::<T>()
}

#[allow(dead_code)]
fn read_vec<T : FromStr>() -> Result< Vec<T>, T::Err>{
    read_line().split_whitespace().map(|x| x.parse::<T>()).collect()
}

fn solve(){
    let mut s = read_line();
    if s.ends_with('\n'){
        s.pop();
    }
    let mut m : HashMap<char,i32> = HashMap::new() ;
    for x in s.chars(){
        *m.entry(x).or_insert(0) += 1
    }
    let mut k : char = 'a';
    let mut odd = 0;
    for (i,x) in m.iter(){
        if x%2==1{
            odd+=1;
            k= i.clone();
        }
        if odd>1{
            println!("NO SOLUTION");
            return;
        }
    }
    *m.entry(k).or_insert(0) -= 1;
    let mut ans  = vec!['a';s.len()];
    ans[(s.len()-1)/2]=k;
    let mut p = 0;
    for (i,x) in m.iter(){
        for _j in 0..(x/2){
            ans[p]=i.clone();
            ans[s.len()-1-p]=i.clone();
            p+=1;
        }
    }

    println!("{}",ans.iter().collect::<String>());

}


fn main() {
    solve();
}