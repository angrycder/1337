use std::io;
use std::str::FromStr;
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

fn solve(){
    let s1 : Vec<char> = read_line().trim().chars().collect();  
    let s2 : Vec<char> = read_line().trim().chars().collect();
    let mut dp :Vec<Vec<i64>> = vec![ vec![ 0 ; s2.len()+1] ; s1.len()+1];
    for i in 0..=s1.len(){
        for j in 0..=s2.len(){

            if i==0{
                dp[i][j]= j as i64;
            }

            else if j==0{
                dp[i][j]= i as i64;
            }

            else if s1[i-1]==s2[j-1]{
                dp[i][j]=dp[i-1][j-1];
            }
            
            else{
                dp[i][j]= 1 + min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]));
            }
        }
    }
    println!("{}",dp[s1.len()][s2.len()]);
   // println!("{:?}",s1);
   // println!("{:?}",s2)
} 


fn main() {
    solve();
}