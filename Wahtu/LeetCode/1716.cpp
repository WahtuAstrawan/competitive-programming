class Solution {
public:
    int totalMoney(int n) {
        int res = 0, temp = 0;
        vector<int> cash{1, 2, 3, 4, 5, 6, 7};
        for(int i = 0; i < n; i++){
            if(temp == 7) temp = 0;
            res += cash[temp];
            cash[temp]++;
            temp++;
        }
        return res;
    }
};
