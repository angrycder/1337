use std::io;
use std::str::FromStr;
use std::convert::TryInto;

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
    let n = read::<i64>().unwrap();
    let mut v = vec![0; (n+1).try_into().unwrap()];
    v[0]=1;
    for i in 1..n+1{
        let mut s:i64= 0;
        let mut j = 1;
        while i-j>=0 && j<=6{
            let k :usize = (i-j).try_into().unwrap();
            s+=v[k];
            j+=1;
        }
        let k :usize = (i).try_into().unwrap();
        v[k]=s%1000000007;
    }
    println!("{}", v.pop().unwrap());
}


fn main() {
    solve();
}