#include <iostream>
using namespace std;

int main(){
    int bykTingkat;
    cin >> bykTingkat;

    for(int i = 0; i < bykTingkat; i++){
        
        for(int k = 0; k < bykTingkat; k++){
            if(k >= bykTingkat - i){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
