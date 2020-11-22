fn gcd(mut n: u64 , mut m: u64) -> u64{
	assert!(n!=0 && m!=0);
	while m!=0{
		if m <n{
			let t=m;
			m=n;
			n=t;
			}
		m= m%n;
		}
	n
	}

#[test]
fn test_gcd (){
assert_eq!(gcd(14,15),1);
}


fn main() {
	println!("Hello Rohan, Rust is here!");
	let mut line = String::new();
	println!("Enter Name:");
	let b1;
	b1 = std::io::stdin().read_line(&mut line).unwrap();
	println!("Hello, {}", line);
	println!("Number of bytes, {}",b1);
}
