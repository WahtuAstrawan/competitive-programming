func rearrangeArray(nums []int) []int {
    pos := []int{};
    neg := []int{};

    for _, val := range nums {
        if val > 0 {
            pos = append(pos, val);
        }
        
        if val < 0 {
            neg = append(neg, val);
        }
    }

    res := []int{};
    var i, j int = 0, 0;
    for i < len(pos) && j < len(neg) {
        res = append(res, pos[i]);
        res = append(res, neg[j]);
        i++;
        j++;
    }

    return res;
}
