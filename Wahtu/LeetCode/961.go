func repeatedNTimes(nums []int) int {
    n := len(nums)

    m := make(map[int]int)

    for i:=0; i<n; i++ {
        m[nums[i]] = 0
    }

    for i:=0; i<n; i++ {
        m[nums[i]] = m[nums[i]] + 1
        if m[nums[i]] == n/2 {
            return nums[i]
        }
    }
    
    return 0;
}
