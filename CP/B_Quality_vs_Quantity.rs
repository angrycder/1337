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
    let n  = read::<usize>().unwrap();
    let mut a = read_vec::<i64>().unwrap();
    a.sort();

    let mut s = 0;

    let t = (n+1)/2;
    for i in 0..t{
        s += a[i];
    }

    if a.iter().sum::<i64>()-s > s{
        println!("YES");
    }
    else{
        println!("NO");
    }
}


fn main() {

    let t = read::<i32>().unwrap();
    for _i in 0..t {
        solve();
    }
}