class Solution {
public:
    bool isPalindrome(string s) {
        string builder = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i] >= 65 && s[i] <= 90){
                builder += tolower(s[i]);
            }else if(s[i] >= 97 && s[i] <= 122 || s[i] >= 48 && s[i] <= 57){
                builder += s[i];
            }
        }
        string temp = builder;
        reverse(builder.begin(), builder.end());
        
        return (builder == temp);
    }
};
