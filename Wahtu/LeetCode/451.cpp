class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;
        string ans = "";

        for (char c : s) {
            mp[c]++;
        }

        vector<pair<char, int>> vec(mp.begin(),mp.end());

        sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });

        for (auto& pair : vec) {
            while(pair.second--) ans += pair.first;
        }

        return ans;
    }
};
