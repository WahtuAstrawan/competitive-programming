func smallerNumbersThanCurrent(nums []int) []int {
    n := len(nums)
    ans := []int{}

    for i := 0; i < n; i++ {
        temp := 0
        for j := 0; j < n; j++ {
            if nums[i] > nums[j] && i != j{
                temp++
            }
        }

        ans = append(ans, temp)
    }

    return ans
}
