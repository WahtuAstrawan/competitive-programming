class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<int> check;
        int n = arr.size();
        for(int i = 0; i < n; i++){
            int freq = 0;
            for(int j = i+1; j < n; j++){
                if(arr[i] == arr[j]) freq++;
                else break;
            }
            check.push_back(freq);
            i += freq;
        }

        set<int> valid(check.begin(), check.end());
        return (valid.size() == check.size());
    }
};
