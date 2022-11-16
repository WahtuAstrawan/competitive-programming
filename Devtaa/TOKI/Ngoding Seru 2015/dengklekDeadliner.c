#include <stdio.h>

int main(){
    int input;
    scanf("%d", &input);
    int timeStamp[] = {0, 0, 0};
    while(input > 0){
        if(input / 3600 > 0){
            timeStamp[0]++;
            input = input - 3600;
        }else if(input / 60 > 0){
            timeStamp[1]++;
            input = input - 60;
        }else{
            timeStamp[2]++;
            input = input - 1;
        }
    }

    for(int i = 0; i < 3; i++){
        printf("%d\n", timeStamp[i]);
    }

    return 0;
}
