use std::io;

fn degrees_convertor(x: f64) {
    // convert degrees to Fahrenheit
    // return value
    let fahrenheit_result: f64 = (x * 9.0/5.0) + 32.0;
    println!("Fahrenheit value is : {fahrenheit_result}");
}

fn main() {
    // asking for value
    let mut entry_degrees: String = String::new();
    println!("Enter celsius temperature : ");
    io::stdin().read_line(&mut entry_degrees).unwrap();
    let value_to_convert: f64 = entry_degrees.trim().parse().unwrap();
    degrees_convertor(value_to_convert);
}