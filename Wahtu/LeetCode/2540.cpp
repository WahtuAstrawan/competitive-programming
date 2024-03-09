class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> mp;
        for(auto num : nums1){
            mp[num] = 10;
        }

        for(auto num : nums2){
            mp[num]++;
            if(mp[num] == 11) return num;
        }

        return -1;
    }
};
