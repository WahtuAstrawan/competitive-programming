class Solution {
public:
    int maxVowels(string s, int k) {
        int count = 0;
        for(int i = 0; i < k; i++){
            if(s[i] == 'a' || s[i] == 'i'|| s[i] == 'u'|| s[i] == 'e'|| s[i] == 'o'){
                count++;
            }
        }
        int ans = count;
        for(int i = k; i < s.length(); i++){
            if(s[i - k] == 'a' || s[i - k] == 'i'|| s[i - k] == 'u'|| s[i - k] == 'e'|| s[i - k] == 'o'){
                count--;
            }
            if(s[i] == 'a' || s[i] == 'i'|| s[i] == 'u'|| s[i] == 'e'|| s[i] == 'o'){
                count++;
            }
            ans = max(ans, count);
        }
        return ans;
    }
};
