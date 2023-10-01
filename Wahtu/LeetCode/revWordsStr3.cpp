class Solution {
public:
    string reverseWords(string s) {
        string ans = "", temp = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' ' || i == s.length() - 1){
                if(i == s.length() - 1) temp += s[i];
                reverse(temp.begin(), temp.end());
                ans += temp;
                if(s[i] == ' ') ans += ' ';
                temp = "";
            }else temp += s[i];
        }
        return ans;
    }
};
