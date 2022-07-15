use std::io;
use std::str::FromStr;
use std::collections::HashSet;
use std::iter::FromIterator;

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
    memo : HashSet<String>,
    a :Vec<char>
}
impl Cache{
    fn permute(&mut self , l : usize,r :usize){
        if l==r{
            self.memo.insert(self.a.iter().collect::<String>());
        }
        else{
            for i in l..r{
                self.a.swap(l,i);
                self.permute(l+1,r);
                self.a.swap(l,i);
            }
        }
    }
}

fn solve(){
    let s :Vec<char> = read_line().trim().chars().collect();
    let n : usize = s.len();
    let mut sol = Cache{
        memo : HashSet::new(),
        a : s
    };
    sol.permute(0,n);
    println!("{}",sol.memo.len());
    let mut unord = Vec::from_iter(sol.memo);
    unord.sort();
    for x in unord{
        println!("{}",x);
    }
}


fn main() {
    solve();
}