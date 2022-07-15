use std::io;
use std::str::FromStr;

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
    let n = read::<usize>().unwrap();
    let a = read_vec::<usize>().unwrap();
    let mut i : usize = 1;
    let mut ans : usize =0;
    let mut j : usize= 0;
    while i<n{
        if a[i] ==  1 && a[i-1] == 0 {
            ans+= i-j;
            j=i;
        }
        i+=1;
    }
    println!("{}",ans);
    
}


fn main() {

    let t = read::<i32>().unwrap();
    for _i in 0..t {
        solve();
    }
}