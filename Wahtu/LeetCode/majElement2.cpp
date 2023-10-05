class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size(), m = 1;
        if(n < 2) return nums;
        if(n == 2 && nums[0] != nums[1]) return nums;

        sort(nums.begin(), nums.end());
        unordered_set<int> set;
        for(int i = 0; i < n - 1; i++){
            if(nums[i] == nums[i+1]) m++;
            if(nums[i] != nums[i+1]) m = 1;
            if(m > (n/3)) set.insert(nums[i]);
        }

        vector<int> ans(set.begin(), set.end());
        return ans;
    }
};
