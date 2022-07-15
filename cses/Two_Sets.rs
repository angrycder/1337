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
    let n = read::<i64>().unwrap();
    if ((n*(n+1))/2)%2==1{
        println!("NO");
    }
    else{
        let mut s :i64= 0;
        let mut l1 = vec![];
        let mut l2 = vec![];
        let t = (n*(n+1))/4;
        for i in (1..=n).rev(){
            if s+i <= t{
                l1.push(i);
                s+=i;
            } 
            else if t-s != i{
                l2.push(i);
            }
            else{
                break;
            }
        }
        if s!=t{
            l1.push(t - s);
        }
        println!("YES");
        println!("{}",l1.len());
        for x in l1{
            print!("{} ",x);
        }
        println!("\n{}",l2.len());
        for x in l2{
            print!("{} ",x);
        }
    }
}


fn main() {
    solve();
}