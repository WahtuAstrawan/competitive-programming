class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        for(char c: s){
            if(c != ']') st.push(c);
            else{
                string temp = "";

                while(st.top() != '['){
                    temp += st.top();
                    st.pop();
                }

                reverse(temp.begin(), temp.end());

                st.pop();
                string num = "";

                while(!st.empty() && isdigit(st.top())){
                    num += st.top();
                    st.pop();
                }

                reverse(num.begin(), num.end());

                int k = stoi(num);
                while(k--){
                    for(int i = 0; i < temp.size(); i++){
                        st.push(temp[i]);
                    }
                }
            }
        }

        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
