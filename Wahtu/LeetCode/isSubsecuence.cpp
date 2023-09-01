class Solution {
public:
    bool isSubsequence(string s, string t) {
        int valid = 0;
        for(int i = 0; i < t.length(); i++){
            if(s[valid] == t[i]){
                valid++;
            }
        }
        return (valid == s.length());
    }
};
