class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 1) return double(nums[0]);
        double sum = 0, ans;
        for(int i = 0; i < k; i++){
            sum += nums[i];
        }
        ans = sum;
        for(int i = k; i < n; i++){
            sum += nums[i] - nums[i - k];
            ans = max(ans, sum);
        }

        return ans/k;
    }
};
