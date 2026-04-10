#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, P;
    
    cin >> N >> M >> P;
    
    vector<vector<int>> mA(N, vector<int>(M));
    vector<vector<int>> mB(M, vector<int>(P));
    
    for(int  i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> mA[i][j];
        }
    }
    
    for(int  i = 0; i < M; i++){
        for(int j = 0; j < P; j++){
            cin >> mB[i][j];
        }
    }
    
    for(int  i = 0; i < N; i++){
        for(int j = 0; j < P; j++){
            int ans = 0;
            for(int k = 0; k < M; k++){
                ans += mA[i][k] * mB[k][j];
            }
            cout << ans << " ";
            if (j - 1 == P){
                cout << endl;
            }
        }
    }
}
