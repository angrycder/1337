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
   let v = read_vec::<i64>().unwrap();
   let [mut n, s]:[_;2] = v.try_into().unwrap();
   n=n*n;
   if s<n{
       println!("{}",0);
   }
   else{
       println!("{}",s/n);
   }

}


fn main() {

    let t = read::<i32>().unwrap();
    for _i in 0..t {
        solve();
    }
}