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
    let  n = read::<i64>().unwrap();
    let mut dp : Vec<i64> = vec![ 0 ; 12 ];
    for i in 0..12{
        let m = 5_i64.pow(i+1);
        dp[i as usize]= n/m;
    }
    let ans : i64 = dp.iter().sum();
    println!("{:?}",ans);
}


fn main() {
    solve();
}