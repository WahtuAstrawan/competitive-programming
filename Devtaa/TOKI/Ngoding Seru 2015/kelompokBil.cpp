#include <iostream>
#include <vector>
using namespace std;

int main(){
    int jmlBil;
    cin >> jmlBil;
    vector <int> barisanBil (jmlBil);
    vector <int> sortedBil (jmlBil);

    for(int i = 0; i < jmlBil; i++){
        cin >> barisanBil[i];
    }

    int j = 0;
    for(int i = 0; i < jmlBil; i++){
        if(barisanBil[i] < 0){
            sortedBil[j] = barisanBil[i];
            j++;
        }
    }
    for(int i = 0; i < jmlBil; i++){
        if(barisanBil[i] == 0){
            sortedBil[j] = barisanBil[i];
            j++;
        }
    }
    for(int i = 0; i < jmlBil; i++){
        if(barisanBil[i] > 0){
            sortedBil[j] = barisanBil[i];
            j++;
        }
    }
    for(int i = 0; i < jmlBil; i++){
        if(i == jmlBil - 1){
            cout << sortedBil[i];
        }else{
            cout << sortedBil[i] << "\n";
        }    
    }

    return 0;
}
