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
    let n = read::<u32>().unwrap();
    for i in 0..2_u32.pow(n){
        let mut s = format!("{:b}",i >> 1 ^ i);
        if s.len()< (n as usize){
            s = "0".repeat((n as usize) - s.len()) + &s;
        }
        println!("{}",s);
    }
}


fn main() {
    solve();
}