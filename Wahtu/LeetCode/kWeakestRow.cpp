class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> rowStr;
        int n = mat.size();
        for(int i = 0; i < n; i++){
            int str = accumulate(mat[i].begin(), mat[i].end(), 0);
            rowStr.push_back({str, i});
        }

        sort(rowStr.begin(), rowStr.end());

        vector<int> ans;
        for(int i = 0; i < k; i++){
            ans.push_back(rowStr[i].second);
        }

        return ans;
    }
};
