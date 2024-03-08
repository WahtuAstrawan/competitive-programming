class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> mp;
        for(auto num : nums) {
            mp[num]++;
        }

        int maxFreq = 0, res = 0;
        for(auto it = mp.begin(); it != mp.end(); ++it) {
            maxFreq = max(maxFreq, it->second);
        }

        for(auto it = mp.begin(); it != mp.end(); ++it) {
            if(it->second == maxFreq) {
                res += it->second;
            }
        }

        return res;
    }
};
