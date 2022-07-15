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
    let _n = read::<u8>().unwrap();
    let v = read_vec::<u64>().unwrap();
    let ans = v.iter().max().unwrap() - v.iter().min().unwrap();
    println!("{}",ans);
}

fn main() {
    let t = read::<i32>().unwrap();
    for _i in 0..t {
        solve();
    }
}
