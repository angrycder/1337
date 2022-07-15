use std::io;
use std::str::FromStr;
use std::cmp::max;
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
    let s = read_line().chars().collect::<Vec<char>>();
    let mut c = 1;
    let mut m = 1;
    for i in 1..s.len() {
        if s[i] == s[i - 1] {
            c += 1;
        } else {
            m = max(m, c);
            c = 1;
        }
    }
    println!("{}", m);
}


fn main() {
    solve();
}