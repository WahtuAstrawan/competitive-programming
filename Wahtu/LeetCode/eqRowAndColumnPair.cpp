class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size(), n2 = grid[0].size(), ans = 0;
        vector<vector<int>> col(n, vector<int>(n2));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n2; j++){
                col[j][i] = grid[i][j]; 
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n2; j++){
                if(grid[i] == col[j]) ans++;
            }
        }

        return ans;
    }
};
