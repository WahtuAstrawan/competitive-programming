#include <stdio.h>

int nilaiTukar(int value){
    int newVal = (value/2) + (value/3) + (value/4);
    if(value < newVal){
        return nilaiTukar(value/2) + nilaiTukar(value/3) + nilaiTukar(value/4);
    }
    return value;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", nilaiTukar(n));

    return 0;
}
