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
    let mut v = read_vec::<usize>().unwrap();
    let mut ans = 0;
    for i in 1..n {
        if v[i] < v[i - 1] {
            ans += v[i-1] - v[i];
            v[i] = v[i-1];
        }
    }
    println!("{}", ans);
}


fn main() {
    solve();
}