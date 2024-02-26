func maxProfit(prices []int) int {
    i := 0
    profit := 0
    n := len(prices) - 1
    var buy, sell int
    for i < n {
        for i < n && prices[i+1] <= prices[i] {
            i++
        }
        buy = prices[i]

        for i < n && prices[i+1] > prices[i] {
            i++
        }
        sell = prices[i]

        profit += sell - buy
    }

    return profit
}
