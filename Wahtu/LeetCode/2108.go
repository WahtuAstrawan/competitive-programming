func firstPalindrome(words []string) string {
    var n int = len(words);

    for i := 0; i < n; i++ {
        if isPalindrome(words[i]) {
            return words[i];
        }
    }

    return "";
}

func isPalindrome(word string) bool {
    r := len(word) - 1;
    l := 0;

    for l < r {
        if word[l] != word[r] {
            return false;
        }
        r--;
        l++;
    }

    return true;
}
