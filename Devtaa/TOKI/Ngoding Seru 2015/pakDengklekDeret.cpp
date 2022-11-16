#include <iostream>
using namespace std;

int main(){
    int batasDeret;
    cin >> batasDeret;
    for(int i = 1; i <= batasDeret; i++){
        if(i == batasDeret){
            cout << i;
        }else{
            cout << i << "+";
        }    
    }

    return 0;
}
