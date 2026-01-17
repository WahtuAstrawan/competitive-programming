func invalidTransactions(transactions []string) []string {
	ans := []string{}
	n := len(transactions)
	if n == 0 {
		return ans
	}

	name := make([]string, n)
	time := make([]int, n)
	money := make([]int, n)
	city := make([]string, n)
	add := make([]bool, n)

	for i := 0; i < n; i++ {
		items := strings.Split(transactions[i], ",")
		name[i] = items[0]
		time[i], _ = strconv.Atoi(items[1])
		money[i], _ = strconv.Atoi(items[2])
		city[i] = items[3]
	}

	for i := 0; i < n; i++ {
		if money[i] > 1000 {
			add[i] = true
		}
		for j := i + 1; j < n; j++ {
			if name[i] == name[j] &&
				abs(time[i]-time[j]) <= 60 &&
				city[i] != city[j] {
				add[i] = true
				add[j] = true
			}
		}
	}

	for i := 0; i < n; i++ {
		if add[i] {
			ans = append(ans, transactions[i])
		}
	}

	return ans
}

func abs(x int) int {
	if x < 0 {
		return -x
	}
	return x
}
