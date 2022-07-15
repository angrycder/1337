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
    let n = read::<usize>().unwrap();
    let mut a = read_vec::<usize>().unwrap();
    if n==1{
        if a[0]==1{
            println!("YES");
        }
        else{
            println!("NO");
        }
        return;
    }
    else{
        a.sort_by(|a, b| b.cmp(a));
        if a[0]-a[1]>1{
            println!("NO");
            return;
        }
        else{
            println!("YES");
            return;
        }
    }
}


fn main() {

    let t = read::<i32>().unwrap();
    for _i in 0..t {
        solve();
    }
}