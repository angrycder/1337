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
   // let v = read_vec::<i128>().unwrap();
    let [x,y]:[_; 2 ] = read_vec::<i128>().unwrap().try_into().unwrap();
    if x>y{
        if x%2==0{
            println!("{}", (x*x) - y +1)
        }
        else{
            println!("{}", ((x-1)*(x-1)) + y )
        }
    }
    else if x<y{
        if y%2==1{
            println!("{}", (y*y) - x +1)
        }
        else{
            println!("{}", ((y-1)*(y-1)) + x)
        }
    }
    else{
        println!("{}",((x*x) + 1 + ((x-1)*(x-1)))/2);
    }

}


fn main() {

    let t = read::<i32>().unwrap();
    for _i in 0..t {
        solve();
    }
}