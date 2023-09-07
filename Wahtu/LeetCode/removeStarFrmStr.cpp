class Solution {
public:
    string removeStars(string s) {
        stack<char> pool;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == '*') pool.pop();
            else pool.push(s[i]);
        }

        string ans = "";
        while (!pool.empty()) {
            ans += pool.top();
            pool.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
