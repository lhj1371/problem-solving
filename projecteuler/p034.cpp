#include <bits/stdc++.h>
using namespace std;

int dp[10];

int fact(int n){
    if (dp[n]) return dp[n];
    if (n==0){
        dp[n] = 1;
        return 1;
    }
    int tmp = fact(n-1) * n;
    dp[n] = tmp;
    return tmp;
}

int main(){
    int ret=0;
    for (int i=3; i<2600000; i++){ // 9! * 7 ~= 2600000
        int tmp1 = i, tmp2 = 0;
        while(tmp1){
            tmp2 += fact(tmp1%10);
            tmp1 /= 10;
        }
        if (tmp2==i){
            ret += i;
        }
    }

    cout << ret;
}
