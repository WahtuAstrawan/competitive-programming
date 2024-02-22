func findJudge(n int, trust [][]int) int {
    if 1 == n {
        return 1
    }
    
    trustScore := make( []int, n+1)
    
    for _, trustVector := range trust{
        
        p1 := trustVector[0]
        p2 := trustVector[1]
        
        trustScore[ p1 ] -= 1
        
        trustScore[ p2 ] += 1
    }
    
    for personID := 1 ; personID <= n ; personID++{
        if ( n - 1 ) == trustScore[ personID ]{
            return personID
        }
    }
    
    return -1
}
