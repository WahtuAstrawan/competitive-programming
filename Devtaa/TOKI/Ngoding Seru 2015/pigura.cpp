#include <iostream>
using namespace std;

int main(){
    int sisiPigura, digit, titikTengah = 0;
    char karakter;
    cin >> sisiPigura;
    cin >> karakter;
    cin >> digit;
    if(sisiPigura % 2 == 1){
        titikTengah = (sisiPigura - 1)/2;
    }
    for(int i = 0; i < sisiPigura; i++){
        for(int j = 0; j < sisiPigura; j++){
            if(i == titikTengah && j == titikTengah && titikTengah != 0){
                cout << "*";
            }else if(i == 0 || i == sisiPigura - 1 || j == 0 || j == sisiPigura - 1){
                cout << digit;
            }else{
                cout << karakter;
            }
        }
        cout << "\n";
    }

}
