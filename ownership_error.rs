// Intentional ownership error for demonstration
fn main() {
    let message = String::from("Hello from Rust");
    let second_message = message;

    println!("New owner: {}", second_message);

    // This fails because ownership of message was moved.
    println!("Original owner: {}", message);
}
