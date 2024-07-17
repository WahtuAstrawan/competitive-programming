#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false);
#define bro cin.tie(NULL);

int main(){
    fast bro;

    int n;
    cin >> n;

    set<int> st;

    while(n--){
        int num;
        cin >> num;
        st.insert(num);
    }

    vector<int> nums(st.begin(), st.end());

    string res = "";

    for(int i = 0; i < nums.size(); i++){
        int start = nums[i];

        while(i < nums.size() - 1 && nums[i] + 1 == nums[i + 1]) {
            i++;
        }

        int end = nums[i];

        if(start == end){
            res += to_string(start) + ",";
        } else {
            res += to_string(start) + "-" + to_string(end) + ",";
        }
    }

    if(!res.empty() && res.back() == ',') {
        res.pop_back();
    }

    cout << res;

    return 0;
}
