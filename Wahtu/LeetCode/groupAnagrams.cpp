class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> res;

        for(string s : strs) {
            string sortedStr = s;
            sort(sortedStr.begin(), sortedStr.end());
            mp[sortedStr].push_back(s);
        }

        for(auto p : mp) {
            res.push_back(p.second);
        }

        return res;
    }
};
