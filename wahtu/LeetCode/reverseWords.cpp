class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        vector<string> words;
        for(int i = 0; i < s.length(); i++){
            if(s[i] != ' '){
                word += s[i];
            }

            if((s[i] == ' ' || i == s.length() - 1) && word.length() > 0){
                words.push_back(word);
                word = "";
            }
        }

        string output;
        for(int i = words.size() - 1; i >= 0; i--){
            output += words[i];

            if(i != 0){
                output += ' ';
            }
        }

        return output;
    }
};
