class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size() == 1) return true;
        bool ans = false;
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] >= nums[i+1]){
                ans = true;
            }else{
                ans = false;
                break;
            }
        }
        if(!ans){
            for(int i = 0; i < nums.size()-1; i++){
                if(nums[i] <= nums[i+1]){
                    ans = true;
                }else{
                    ans = false;
                    break;
                }
            }
        }
        return ans;
    }
};
