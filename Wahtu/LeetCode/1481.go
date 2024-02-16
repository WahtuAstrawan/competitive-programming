func findLeastNumOfUniqueInts(arr []int, m int) int {
    mp := make(map[int]int);
    pool := []int{};

    for _, num := range arr {
        mp[num]++;
    }

    for _, v := range mp {
        pool = append(pool, v);
    }

    sort.Ints(pool);

    var removed int;
    for _, freq := range pool {
        if m >= freq {
            m -= freq;
            removed++;
        } else {
            break;
        }
    }

    return len(pool) - removed;
}
