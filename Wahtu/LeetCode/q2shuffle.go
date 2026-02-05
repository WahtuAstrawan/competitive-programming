func shuffle(nums []int, n int) []int {
    ans := make([]int, 0)
    
    left := 0
    right := n

    for right < 2*n {
        ans = append(ans, nums[left])
        ans = append(ans, nums[right])

        left++
        right++
    }

    return ans
}
