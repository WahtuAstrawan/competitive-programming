class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), res = 0, n = matrix[0].size();

        vector<int> height(n, 0);
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 0) height[j] = 0;
                else height[j] += 1;
            }

            vector<int> order = height;
            sort(order.begin(), order.end());

            for(int j = 0; j < n; j++){
                res = max(res, order[j] * (n - j));
            }
        }

        return res;
    }
};
