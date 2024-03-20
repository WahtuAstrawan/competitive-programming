class Solution {
public:
    int dayOfYear(string date) {
        string year = "", month = "", day = "";
        for(int i = 0; i < date.length(); i++){
            if(i < 4) year += date[i];
            else if(i > 4 && i < 7) month += date[i];
            else if(i > 7) day += date[i];
        }

        int yearI = stoi(year), monthI = stoi(month), dayI = stoi(day), res = 0;

        if(yearI == 1900) return 122;

        vector<int> dayMonth{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if(yearI % 4 == 0){
            dayMonth[1] = 29;
        } 

        for (int i = 0; i < monthI - 1; ++i) {
            res += dayMonth[i];
        }

        res += dayI;
        return res;
    }
};
