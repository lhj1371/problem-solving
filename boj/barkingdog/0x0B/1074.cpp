#include <bits/stdc++.h>
using namespace std;
int func(int n, int r ,int c){
    if (n==1){
        return 2*r + c;
    }
    int k = pow(2, n-1);
    return k*k*(2*(r/k) + c/k) + func(n-1, r%k, c%k);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, r, c;
    cin >> n >> r >> c;
    
    cout << func(n, r, c) << '\n';
}