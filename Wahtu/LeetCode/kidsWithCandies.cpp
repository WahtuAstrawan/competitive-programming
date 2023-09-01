class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        set<unsigned short int> cek(candies.begin(), candies.end());
        unsigned short int max = *(--cek.end());
        vector<bool> output;
        for(unsigned short int i = 0; i < candies.size(); i++){
            if(candies[i] + extraCandies >= max){
                output.push_back(true);
            }else{
                output.push_back(false);
            }
        }
        return output;
    }
};
