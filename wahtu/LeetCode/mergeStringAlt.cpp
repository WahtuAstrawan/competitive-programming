class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        unsigned short int n = word1.size() + word2.size();
        unsigned short int a = 0, b = 0;
        string output;
        output.resize(n);   
        for(unsigned short int i = 0; i < n; i++){
            if(isalpha(word1[a]) && isalpha(word2[b])){
                if(i % 2 == 0){
                    output[i] = word1[a];
                    a++;
                }else{
                    output[i] = word2[b];
                    b++;
                }
            }else if(isalpha(word1[a])){
                output[i] = word1[a];
                a++;
            }else {
                output[i] = word2[b];
                b++;
            }
        }
        return output;
    }
};
