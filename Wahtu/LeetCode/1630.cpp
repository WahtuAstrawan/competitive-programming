class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> res;

        for(int i = 0, k = 0; i < l.size(); i++){
            vector<int> temp;
            for(int j = l[i]; j <= r[i]; j++){
                temp.push_back(nums[j]);
            }
            sort(temp.begin(), temp.end());
            for(k = 2; k < temp.size(); k++){
                if(temp[1] - temp[0] != temp[k] - temp[k - 1]){
                    break;
                }
            }
            res.push_back(k == temp.size());
        }

        return res;
    }
};
