func merge(nums1 []int, m int, nums2 []int, n int)  {
    ans := nums1[0:m]

    for i := 0; i < n; i++ {
        ans = append(ans, nums2[i])
    }

    sort.Ints(ans)

    copy(nums1, ans)
}
