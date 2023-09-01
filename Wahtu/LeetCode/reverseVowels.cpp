class Solution {
public:
    string reverseVowels(string s) {
        string vokal = "";
        string output = s;
        vector<int> idxVokal;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'a') {
                vokal.push_back('a');
                idxVokal.push_back(i);
            }
            if(s[i] == 'i'){ 
                vokal.push_back('i');
                idxVokal.push_back(i);
            }
            if(s[i] == 'u') {
                vokal.push_back('u');
                idxVokal.push_back(i);
            }
            if(s[i] == 'e') {
                vokal.push_back('e');
                idxVokal.push_back(i);
            }
            if(s[i] == 'o') {
                vokal.push_back('o');
                idxVokal.push_back(i);
            }
            if(s[i] == 'A') {
                vokal.push_back('A');
                idxVokal.push_back(i);
            }
            if(s[i] == 'I') {
                vokal.push_back('I');
                idxVokal.push_back(i);
            }
            if(s[i] == 'U') {
                vokal.push_back('U');
                idxVokal.push_back(i);
            }
            if(s[i] == 'E') {
                vokal.push_back('E');
                idxVokal.push_back(i);
            }
            if(s[i] == 'O') {
                vokal.push_back('O');
                idxVokal.push_back(i);
            }
        }

        reverse(vokal.begin(), vokal.end());
        for(int i = 0; i < idxVokal.size(); i++){
            output[idxVokal[i]] = vokal[i];
        }

        return output;
    }
};
