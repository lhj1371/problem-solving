#include <bits/stdc++.h>
using namespace std;

int fact[10];
int isused[10];

int main(){
    fact[0] = 1;
    int tmp=1;
    for (int i=1; i<=9; i++){
        tmp *= i;
        fact[i] = tmp;
    }

    int n = 1000000;

    for (int i=9; i>=0; i--){
        int cur = 0;
        while (isused[cur])
            cur++;

        int f = fact[i];
        while (n>f){
            n -= f;
            cur++;
            while (isused[cur])
                cur++;
        }
        cout << cur;
        isused[cur] = 1;
    }
}
