class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ers = 1, i = 0, j = 0;
        for(; j < nums.size(); j++){
            if(nums[j] == 0) ers--;
            if(ers < 0 && nums[i++] == 0) ers++;
        }

        return j - i - 1;
    }
};
