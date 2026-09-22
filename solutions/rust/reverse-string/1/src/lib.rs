pub fn reverse(input: &str) -> String {
    let mut s = String::new();
    let rev_iter = input.chars().rev();
    for i in rev_iter {
        s.push(i);
    }
    s
}
