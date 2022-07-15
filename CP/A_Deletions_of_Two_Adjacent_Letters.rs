use std::io;
use std::str::FromStr;

#[allow(dead_code)]
fn read_line() -> String {
    let mut buffer = String::new();
    io::stdin()
        .read_line(&mut buffer)
        .expect("failed to read line");

    return buffer;

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
    let  s  = read_line().replace("\n", "").chars().collect::<Vec<char>>();
    let  _c  = read_line().replace("\n", "").chars().collect::<Vec<char>>();
    let c = _c[0];
    let mut flag : bool = false;
    for i in (0..s.len()).step_by(2){
        if s[i] == c {
            flag = true;
            break;
        }
    }
    if flag {
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