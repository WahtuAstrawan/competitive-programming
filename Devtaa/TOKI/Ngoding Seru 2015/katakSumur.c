#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    long long jmlLompatan, targetLompat;
    scanf("%lld", &jmlLompatan);
    scanf("%lld", &targetLompat);
    long long lompatanKatak[jmlLompatan];
    for(int i = 0; i < jmlLompatan; i++){
        scanf("%lld", &lompatanKatak[i]);
    }
    long long totalLompat = 0;

    for(int i = 0; i < jmlLompatan - 1; i++){
        for(int j = 0; j < jmlLompatan - 1; j++){
            if(lompatanKatak[j] > lompatanKatak[j+1]){
                swap(&lompatanKatak[j], &lompatanKatak[j+1]);
            }
        }
    }

    while(targetLompat > 0){
        if(targetLompat >= lompatanKatak[jmlLompatan - 1]){
            targetLompat = targetLompat - lompatanKatak[jmlLompatan - 1];
            totalLompat = totalLompat + lompatanKatak[jmlLompatan - 1];
        }else if(targetLompat < lompatanKatak[jmlLompatan - 1]){
            for(int i = 0; i < jmlLompatan; i++){
                if(lompatanKatak[i] > targetLompat){
                    targetLompat = targetLompat - lompatanKatak[i];
                    totalLompat = totalLompat + lompatanKatak[i];
                    break;
                }
            }
        }
    }

    printf("%lld", totalLompat);

    return 0;
}
