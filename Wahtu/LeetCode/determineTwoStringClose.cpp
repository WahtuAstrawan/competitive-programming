class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n1 = word1.length(), n2 = word2.length();
        if (n1 != n2) return false;
        
        vector<int> freq1(26, 0), freq2(26, 0);
        set<char> uniq1, uniq2;

        for(int i = 0; i < n1; i++){
            freq1[word1[i] - 'a']++;
            freq2[word2[i] - 'a']++;

            uniq1.insert(word1[i]);
            uniq2.insert(word2[i]);
        }

        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        return (freq1 == freq2 && uniq1 == uniq2);
    }
};
