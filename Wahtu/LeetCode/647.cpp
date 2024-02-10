class Solution {
public:
    int countSubstrings(string s) {
        int n = s.length(), ans = 0;
        for(int i = 0; i < n; i++){
            int count = 0, l = i, r = i;
            while(l >= 0 && r < n && s[l] == s[r]){
                count++;
                l--;
                r++;
            }

            ans += count;
            count = 0, l = i, r = i + 1;
            while(l >= 0 && r < n && s[l] == s[r]){
                count++;
                l--;
                r++;
            }

            ans += count;
        }

        return ans;
    }
};
