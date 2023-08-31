class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int left = 0, right = nums.size() - 1, ans = 0;
        sort(nums.begin(), nums.end());
        while(left < right){
            int sum = nums[left] + nums[right];
            if(sum == k){
                ans++;
                left++;
                right--;
            }

            if(sum > k) right--;
            else if(sum < k) left++;
        }

        return ans;
    }
};
