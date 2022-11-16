#include <stdio.h>
int wktColek[100001], wktColekReaksi[100001];

int main(){
    int jmlColek, wktReaksi, samaan = 0, j = 0;;
    scanf("%d %d", &jmlColek, &wktReaksi);
    for(int i = 0; i < jmlColek; i++){
        scanf("%d", &wktColek[i]);
        wktColekReaksi[i] = wktColek[i] + wktReaksi;
        while(wktColek[i] > wktColekReaksi[j]){
            j++;
        }
        if(wktColek[i] == wktColekReaksi[j]){
            samaan++;
        }
    }
    printf("%d", samaan);


}
