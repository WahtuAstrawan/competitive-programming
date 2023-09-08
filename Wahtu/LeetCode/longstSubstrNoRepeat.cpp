class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>mp(128);
        int ans(0),i=0,j=0,n=s.length();
        while(j<n)
        {
            mp[s[j]]++;
            while(mp[s[j]]>1)
            mp[s[i++]]--;
            
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};
