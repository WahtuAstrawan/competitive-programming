class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> chFreq(26, 0);
        for(auto ch : chars) chFreq[ch - 'a']++;
        
        int count = 0;
        
        for(auto str : words){

            bool flag = true;

            vector<int> copyFreq(26, 0);

            for(auto ch : str) {
                copyFreq[ch - 'a']++;
                if(copyFreq[ch - 'a'] > chFreq[ch - 'a']){
                    flag = false;
                    break;
                }
            }

            if(flag) count += str.size();
        }
        
        return count;
    }
};
