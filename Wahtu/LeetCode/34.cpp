class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans{-1, -1};
        if(n < 1) return ans;
        for(int i = 0; i < n; i++){
            if(nums[i] == target && ans[0] == -1){
                ans[0] = i;
            }else if(nums[i] == target && ans[0] != -1){
                ans[1] = i;
            }
        }

        if(ans[0] != -1 && ans[1] == -1){
            ans[1] = ans[0];
        }
        
        return ans;
    }
};
