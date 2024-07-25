class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]] = i;
        }

        for(int i = 0; i < nums.size(); i++){
            int search = target - nums[i];
            if(mp.find(search) != mp.end() && i != mp[search]){
                return {i, mp[search]};
            }
        }

        return {};
    }
};
