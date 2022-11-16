#include <iostream>
#include <vector>
using namespace std;

bool cocok(int a, int b){
    if(a == b || a + 1 == b){
        return true;
    }else{
        return false;
    }
}

int main(){
    int jmlBebek, jmlSepatu, input;
    bool value = false;
    vector <int> ukuranBebek;
    vector <int> ukuranSepatu;

    cin >> jmlBebek >> jmlSepatu;
    for(int i = 0; i < jmlBebek; i++){
        cin >> input;
        ukuranBebek.push_back(input);
    }
    for(int i = 0; i < jmlSepatu; i++){
        cin >> input;
        ukuranSepatu.push_back(input);
    }

    sort(ukuranBebek.begin(), ukuranBebek.end());
    sort(ukuranSepatu.begin(), ukuranSepatu.end());

    int idxA = 0;
    int idxB = 0;
    int jmlPas = 0;
    while(idxA < jmlBebek && idxB < jmlSepatu){
        value = cocok(ukuranBebek[idxA], ukuranSepatu[idxB]);
        if(value == true){
            jmlPas++;
            idxA++;
            idxB++;
        }else if(value == false){
            if(ukuranBebek[idxA] > ukuranSepatu[idxB]){
                idxB++;
            }else if(ukuranBebek[idxA] < ukuranSepatu[idxB]){
                idxA++;
            }
        }
    }

    cout << jmlPas << "\n";

    return 0;
}
