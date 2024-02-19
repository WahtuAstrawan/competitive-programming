func isPowerOfTwo(n int) bool {
    if n == 1 || n == 2 { return true }

    i := 4;
    for true {
        if i == n { return true }
        if i > n { return false }
        i *= 2
    }

    return false
}
