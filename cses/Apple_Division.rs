use std::io;
use std::str::FromStr;
use std::cmp::min;
use std::collections::HashMap;
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
    no : usize,
    apples : Vec<i64>,
    total : i64,
    memo : HashMap<(usize,i64),i64>
}

impl Cache{
    fn dp(&mut self, i :usize ,t:i64)-> i64{
        if self.memo.contains_key(&(i,t)){
            return self.memo[&(i,t)];
        }
        if i==self.no{
            return (self.total - 2*t).abs();
        }
        let ans = min(self.dp(i+1,t),self.dp(i+1,t + self.apples[i]));
        self.memo.insert((i,t),ans);
        return ans;
    }
}

fn solve(){
    let n = read::<usize>().unwrap();
    let v = read_vec::<i64>().unwrap();
    let mut sol = Cache{
        no : n,
        total : v.iter().sum(),
        apples : v,
        memo : HashMap::new()
    };
    println!("{}",sol.dp(0,0));
}


fn main() {
    solve();
}