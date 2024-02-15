func findWords(words []string) []string {
    letters := [26]int{}
    for _, r := range "qwertyuiop" { letters[r-'a'] = 1 }
    for _, r := range "asdfghjkl" { letters[r-'a'] = 2 }
    for _, r := range "zxcvbnm" { letters[r-'a'] = 3 }
    
    res := []string{}
    for i := 0; i < len(words); i++ {
        word := strings.ToLower(words[i]);
        flag := letters[word[0] - 'a'];
        check := true;
        for j := 0; j < len(word); j++ {
            if letters[word[j] - 'a'] != flag {
                check = false;
                break;
            }
        }

        if check {
            res = append(res, words[i]);
        }
    }

    return res;
}
