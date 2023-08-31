class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int current = 0, maxAl = 0;
        for(int i = 0; i < gain.size(); i++){
            current += gain[i];
            maxAl = max(maxAl, current);
        }

        return maxAl;
    }
};
