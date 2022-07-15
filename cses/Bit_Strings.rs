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
fn pow(mut x : i64 , mut y: i64 , p:i64) -> i64{
    let mut res = 1;
    x = x%p;
    if x==0{
        return 0;
    }
    while y>0{
        if y%2==1{
            res = (res*x)%p;
        }
        y = y >> 1;
        x = (x*x)%p;
    }
    return res

}
fn solve(){

    let m = 1000000007;
    let n = read::<i64>().unwrap();

    println!("{}",pow(2,n,m));
    
}


fn main() {
    solve();
}