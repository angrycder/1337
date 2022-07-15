use std::io;
use std::str::FromStr;
use std::vec::Vec;

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
    let tmp = read_vec::<u32>().unwrap();
    let n = tmp[0];
    let l = tmp[1];
    let  a = read_vec::<u32>().unwrap();
    let mut s = vec![0; l];
    for val in 0..a.len(){
        let mut i = 0;
        while val>0{
            i += 1;
        }
    }
    println!("{}",ans);
}

fn main() {
    let t = read::<i32>().unwrap();
    for _i in 0..t {
        solve();
    }
}
