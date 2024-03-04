func bagOfTokensScore(tokens []int, power int) int {
    if len(tokens) == 0 {
        return 0
    }
    
    sort.Ints(tokens)
    
    score := 0
    maxScore := 0
    i, j := 0, len(tokens)-1

    for i <= j {
        if power >= tokens[i] {
            power -= tokens[i]
            i++
            score++
            maxScore = max(maxScore, score)
        } else if score > 0 {
            power += tokens[j]
            j--
            score--
        } else {
            break
        }
    }

    return maxScore
}

func max(a, b int) int {
    if a > b {
        return a
    }
    return b
}
