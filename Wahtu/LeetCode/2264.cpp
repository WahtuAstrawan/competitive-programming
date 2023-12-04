class Solution {
public:
    string largestGoodInteger(string num) {
        string ans = "";
        for(int i = 0; i < num.length() - 1; i++){
            if(num[i + 2] == num[i + 1] && num[i + 1] == num[i]){
                if(ans[0] < num[i]){
                    ans = num.substr(i, 3);
                }
            }
        }
        return ans;
    }
};
