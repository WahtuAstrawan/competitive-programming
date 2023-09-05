class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            int count = 0;
            for(int j = i; j < nums.size(); j++){
                if(nums[i] == nums[j]) count++;
            }
            if(count > nums.size() / 2) return nums[i];
            i += count-1;
            count = 0;
        }

        return 1;
    }
};
