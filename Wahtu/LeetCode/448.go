func findDisappearedNumbers(nums []int) []int {
    mp := make(map[int]int)
    ans := []int{}

    n := len(nums)

    for i := 0; i < n; i++ {
        mp[nums[i]]++
    }

    for i := 1; i <= n; i++ {
        if mp[i] == 0 {
            ans = append(ans, i)
        }
    }

    return ans
}
