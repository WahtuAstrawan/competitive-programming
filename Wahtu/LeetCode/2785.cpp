class Solution {
public:
    string sortVowels(string s) {
        string vowels = "";
        unordered_set<char> cek;
        cek.insert('A');
        cek.insert('I');
        cek.insert('U');
        cek.insert('E');
        cek.insert('O');
        cek.insert('a');
        cek.insert('i');
        cek.insert('u');
        cek.insert('e');
        cek.insert('o');

        for(int i = 0; i < s.length(); i++){
            if(cek.find(s[i]) != cek.end()){
                vowels += s[i]; 
            }
        }

        sort(vowels.begin(), vowels.end());
        int j = 0;
        for(int i = 0; i < s.length(); i++){
            if(cek.find(s[i]) != cek.end()){
                s[i] = vowels[j];
                j++;
            }
        }

        return s;
    }
};
