#include <iostream>
#include <vector>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = *a;
}

int main(){
    vector <int> arrBebek(3);
    cin >> arrBebek.at(0) >> arrBebek.at(1) >> arrBebek.at(2);
    sort(arrBebek.begin(), arrBebek.end());
    swap(arrBebek.at(1), arrBebek.at(2));
    for(int i = 0; i < arrBebek.size(); i++){
        cout << arrBebek.at(i) << "\n";
    }
    return 0;
}
