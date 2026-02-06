func findMaxConsecutiveOnes(nums []int) int {
    ans := 0

    n := len(nums)

    for i := 0; i < n; i++ {
        if nums[i] == 1 {
            temp := 1
            j := i + 1
            for j < n && nums[j] == 1 {
                temp++
                j++
            }

            ans = max(ans, temp)
            i = j
        }
    }

    return ans
}

func max(a int, b int) int {
    if a > b {
        return a
    }
    return b
}
