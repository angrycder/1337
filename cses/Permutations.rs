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
    let n : usize = read().unwrap();
    if n ==3 || n==2 {
        println!("NO SOLUTION");
        return;
    }
    if n == 1 {
        println!("1");
        return;
    }

    let mut a  = vec![0; n];
    for i in 0..n/2{
        a[i] = 2*(i + 1);
    }
    let mut c = 0;
    for i in n/2..n{
        a[i] = 2*c + 1;
        c += 1;
    }
    for i in 0..n{
        print!("{} ", a[i]);
    }
}


fn main() {
    solve();
}