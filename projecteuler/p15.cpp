#include <bits/stdc++.h>
using namespace std;

long long dp[21][21];

int main(){
    dp[0][0] = 1;
    for (int i=0; i<21; i++){
        for (int j=0; j<21; j++){
            if (i==0 && j==0) continue;
            long long tmp = 0;
            if (i>0) tmp += dp[i-1][j];
            if (j>0) tmp += dp[i][j-1];
            dp[i][j] = tmp;
        }
    }

    cout << dp[20][20];
}
