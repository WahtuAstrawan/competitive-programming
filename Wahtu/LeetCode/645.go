func findErrorNums(nums []int) []int {
    mp := make(map[int]int)
    ans := make([]int, 0)
    n := len(nums)

    for i := 1; i <= n;i++ {
        mp[i] = 0
    }

    for _, num := range nums {
        if mp[num] == 1 {
            ans = append(ans, num)
        }
        mp[num]++
    }

    for i := 1; i <= n;i++ {
        if mp[i] == 0 {
            ans = append(ans, i)
        }
    }

    return ans
}
