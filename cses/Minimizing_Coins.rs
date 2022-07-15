use std::io;
use std::str::FromStr;
use std::convert::TryInto;
use std::cmp::min;

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
struct Cache{
    map : HashMap<i32,i32>
}

impl Cache{
    fn dp(&mut self,coins:Vec<i32>,i:i32,target:i32) -> i32{
        if self.map.contains_key(&n){
            return self.map[&n];
        }
        if i==coins.len(){
            return 0
        }
        else{
            let val = n*self.fib(n-1);
            self.map.insert(n,val);
            return val
        }
    }
}
fn solve(){
    let v = read_vec::<i32>().unwrap();
    let [_n,target]:[i32; 2 ] = v.try_into().unwrap();
    let coins = read_vec::<i32>().unwrap();
    let mut dp:Vec<i32> = vec![std::i32::MAX; (target+1).try_into().unwrap()];
    dp[0] = 0;
    for coin in coins{
        for i in coin..=target{
            let j:usize = (i).try_into().unwrap();
            let k:usize = (coin).try_into().unwrap();
            dp[j] = min(dp[j], dp[j-k]+1);
        }
    }
    if dp[(target).try_into().unwrap()] == std::i32::MAX{
        println!("-1");
    }
    else{
        println!("{}", (target).try_into().unwrap());
    }
}


fn main() {
    solve();
}