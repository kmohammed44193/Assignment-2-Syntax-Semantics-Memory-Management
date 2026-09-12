fn display_message(message: &String) {
    println!("Borrowed value: {}", message);
}
fn main() {
    let message = String::from("Hello from Rust");
    display_message(&message);
    println!("Original value still available: {}", message);
    let second_message = message;
    println!("New owner: {}", second_message);
}
