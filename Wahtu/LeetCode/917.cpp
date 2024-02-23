class Solution {
public:
    string reverseOnlyLetters(string s) {
        vector<char> alphaOnly;
        for (char c : s) {
            if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
                alphaOnly.push_back(c);
            }
        }

        for (int i = 0, j = alphaOnly.size() - 1; i < j; ++i, --j) {
            swap(alphaOnly[i], alphaOnly[j]);
        }

        int flag = 0;
        for (int i = 0; i < s.length(); ++i) {
            if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)) {
                s[i] = alphaOnly[flag];
                ++flag;
            }
        }

        return s;
    }
};
