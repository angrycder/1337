use std::collections::HashMap;

struct Cache{
    map : HashMap<i32,i32>
}

impl Cache{
    fn fib(&mut self,n:i32) -> i32{
        if self.map.contains_key(&n){
            return self.map[&n];
        }
        if n==0 || n==1{
            return 1
        }
        else{
            let val = n*self.fib(n-1);
            self.map.insert(n,val);
            return val
        }
    }
}


fn main() {
    let mut t = Cache{
        map:HashMap::new()
    };
    println!("{}",t.fib(10));
    println!("{}",t.fib(5));
    println!("{:?}",t.map)
}