#include <bits/stdc++.h>
using namespace std;

int coins[8] = {200, 100, 50, 20, 10, 5, 2, 1};

int npossible(int n, int cidx){
    if (n==0 || cidx==7) return 1;
    int ret = 0;
    int c = coins[cidx];
    while (n>=0){
        ret += npossible(n, cidx+1);
        n -= c;
    }
    return ret;
}

int main(){
    cout << npossible(200, 0);
}
