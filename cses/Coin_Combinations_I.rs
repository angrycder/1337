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
    let [n,x]:[_; 2 ] = read_vec::<i64>().unwrap().try_into().unwrap();
    let  c = read_vec::<i64>().unwrap();

    let mut dp = vec![0;1000001];
    dp[0]=1;
    for w in 0..=x{
        for i in 1..=n{
            if w-c[(i-1) as usize]>=0{
                dp[w as usize]+=dp[(w-c[(i-1) as usize]) as usize];
                dp[w as usize]%=1000000007;
            }   
        }
    }
    //let x1 :usize = (x).try_into().unwrap();
    println!("{}", dp[x as usize]);

}


fn main() {
    solve();
}