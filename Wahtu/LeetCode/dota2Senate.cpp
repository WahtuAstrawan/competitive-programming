class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> ri, di;
        int n = senate.length();
        for(int i = 0; i < n; i++){
            if(senate[i] == 'R') ri.push(i);
            else di.push(i);
        }

        while(!ri.empty() && !di.empty()){
            if(ri.front() > di.front()){
                di.push(n++);
            }else ri.push(n++);

            ri.pop();
            di.pop(); 
        }

        if(ri.empty()) return "Dire";
        return "Radiant";
    }
};
