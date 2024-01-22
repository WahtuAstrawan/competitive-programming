class Solution 
{
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        int s = nums.size()*(nums.size()+1) / 2;
        
        int a = 0, u = 0;
        vector<int> fl(nums.size()+1, 1);
        for (auto n : nums)
        {
            a += n; 
            u += n*(fl[n]--);
        }
        
        return {a-u, s-u};
    }
};
