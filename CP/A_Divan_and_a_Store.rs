use std::io;
use std::str::FromStr;
use std::vec::Vec;
use itertools::Itertools;

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
    read_line().split_whitespace().map(|x| x.parse::<T>()).collect::<>()
}

fn solve(){
    let v = read_vec::<i32>().unwrap();
    
//    let (n,l,k,r) = v.iter();
    let mut a = read_vec::<i64>().unwrap();

    let mut ans = 0;
    println!("{}", ans);
}

fn main() {
    let t = read::<i32>().unwrap();
    for _i in 0..t {
        solve();
    }
}
