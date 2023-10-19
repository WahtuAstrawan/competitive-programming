class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> ss, st;
        for(char c : s){
            if(c == '#' && !ss.empty())ss.pop();
            else if(c != '#') ss.push(c);
        }

        for(char c : t){
            if(c == '#'&& !st.empty())st.pop();
            else if(c != '#') st.push(c);
        }

        return (ss == st);
    }
};
