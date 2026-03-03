func buildArray(target []int, n int) []string {
    ans := []string{}
    j := 0

    for i := 1; i <= n && j < len(target); i++ {
        if target[j] == i {
            ans = append(ans, "Push")
            j++
        } else {
            ans = append(ans, "Push")
            ans = append(ans, "Pop")
        }
    }

    return ans
}
