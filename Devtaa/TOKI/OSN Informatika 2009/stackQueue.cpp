#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int testCase, value;
    string methodUsed;
    vector <int> arrValue;

    cin >> testCase;
    for(int i = 0; i < testCase; i++){
        cin >> methodUsed;
        if(methodUsed == "push_back" || methodUsed == "push_front"){
            cin >> value;
            if(methodUsed == "push_back"){
                arrValue.push_back(value);
            }else if(methodUsed == "push_front"){
                arrValue.insert(arrValue.begin(), value);
            }
        }else if(methodUsed == "pop_front"){
            arrValue.erase(arrValue.begin());
        }else if(methodUsed == "pop_back"){
            arrValue.pop_back();
        }
    }

    for(int i = 0; i < arrValue.size(); i++){
        cout << arrValue.at(i) << "\n";
    }

    return 0;
}
