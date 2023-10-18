class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> check = heights;
        sort(check.begin(), check.end());
        int ans = 0;
        for(int i = 0; i < heights.size(); i++){
            if(heights[i] != check[i]) ans++;
        }
        return ans;
    }
};
