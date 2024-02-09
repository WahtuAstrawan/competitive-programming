class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        if(nums.size() <= 1) return nums;

        sort(nums.begin(), nums.end());
        unordered_map<int, vector<int>> dp;

        for(int i = 0; i < nums.size(); i++){
            dp[i].push_back(nums[i]);
            for(int j = 0; j < i; j++){
                if(nums[i] % nums[j] == 0 && dp[i].size() < dp[j].size() + 1){
                    dp[i] = dp[j];
                    dp[i].push_back(nums[i]);
                }
            }
        }

        int maxLengthIndex = 0;
        for(int i = 1; i < nums.size(); i++){
            if(dp[i].size() > dp[maxLengthIndex].size()){
                maxLengthIndex = i;
            }
        }

        return dp[maxLengthIndex];
    }
};
