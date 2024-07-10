class Solution {
public:
    int minOperations(vector<string>& logs) {
        int res = 0;
        for(int i = 0; i < logs.size(); i++){
            if (res < 0){
                res = 0;
            }

            if(logs[i] != "../" && logs[i] != "./"){
                res++;
            } else if(logs[i] == "../") {
                res--;
            }
        }

        return res < 0 ? 0 : res;
    }
};
