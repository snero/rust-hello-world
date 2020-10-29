fn main() {
    let mut mycount = 0;
    for x in 0..1000000 {
        let y = is_prime(x);
        if y {
            mycount += 1; 
            //print!("The current progress {}\n",mycount);
        }
    }

    print!("The number of primes is {} Rust\n",mycount);
}

fn is_prime(n: u32) -> bool {
    if n <= 1 {
        return false;
    }
    for a in 2..n {
        if n % a == 0 {
            return false; // if it is not the last statement you need to use `return`
        }
    }
    true // last value to return
}
