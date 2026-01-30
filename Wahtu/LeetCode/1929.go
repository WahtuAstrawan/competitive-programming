func getConcatenation(nums []int) []int {
    ans := make([]int, len(nums) * 2)

    for i := 0; i < len(nums); i++ {
        ans[i] = nums[i]
        ans[len(nums) + i] = nums[i]
    }

    return ans
}
