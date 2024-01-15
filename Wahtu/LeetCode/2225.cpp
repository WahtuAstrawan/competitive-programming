class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> loss;
        int n = matches.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 2; j++){
                if(j == 1) loss[matches[i][j]]++;
                else if(j == 0 && loss[matches[i][j]] >= 0){
                    continue;
                }else loss[matches[i][j]] = 0;
            }
        }

        vector<vector<int>> res(2, vector<int>());

        for (const auto& entry : loss) {
            if (entry.second == 0) {
                res[0].push_back(entry.first);
            } else if (entry.second == 1) {
                res[1].push_back(entry.first);
            }
        }

        return res;
    }
};
