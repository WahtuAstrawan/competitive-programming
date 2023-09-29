class Solution {
public:
    bool dfs(int i, int j, vector<vector<int>>& dp, int n, int m, string& s, string& p) {
        if (dp[i][j] != -1) return dp[i][j];
        bool ans = false;

        if (j == m) {
            ans = (i == n);
        } else {
            bool match = (i < n) && (s[i] == p[j] || p[j] == '.');

            if ((j + 1) < m && p[j + 1] == '*') {
                ans = (dfs(i, j + 2, dp, n, m, s, p) || (match && dfs(i + 1, j, dp, n, m, s, p)));
            } else if (match) {
                ans = dfs(i + 1, j + 1, dp, n, m, s, p);
            }
        }

        dp[i][j] = ans;
        return ans;
    }

    bool isMatch(string s, string p) {
        int n = s.length(), m = p.length();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
        return dfs(0, 0, dp, n, m, s, p);
    }
};
