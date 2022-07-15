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
    let [ a,  b]:[i64;2] = read_vec::<i64>().unwrap().try_into().unwrap();
    
    if a>2*b || b>2*a{
        println!("NO");
    }
    else{

        if (a+b)%3==0{
            println!("YES");
        }
        else{
            println!("NO");
        }
    }

}


fn main() {

    let t = read::<i32>().unwrap();
    for _i in 0..t {
        solve();
    }
}