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
    let var = read_vec::<u8>().unwrap();
    let n = var[0];
    let m = var[1];
    let r = var[2];
    let c = var[3];
    let mut board = Vec::<String>::new();
    for _i in 0..n{
        board.push(read_line());
    }
    if board[usize::from(r-1)].as_bytes()[usize::from(c-1)] == 'B' as u8{
        println!("{}", "0");
        return;
    }
    let mut flag : bool= false;
    for i in 0..n{
        for j in 0..m{
            if board[usize::from(i)].as_bytes()[usize::from(j)] == 'B' as u8{
                flag = true;
                if i == r-1 || j == c-1 {
                    println!("{}", "1");
                    return;
                }
            }
        }
    }
    if flag{
        println!("{}", "2");
        return;
    }
    else{
        println!("{}", "-1");
        return;
    }
}

fn main() {
    let t = read::<i32>().unwrap();
    for _i in 0..t {
        solve();
    }
}
