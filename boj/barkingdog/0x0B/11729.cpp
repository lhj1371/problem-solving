#include <bits/stdc++.h>
using namespace std;
void func(int n, int i ,int j){
    if (n==1){
        cout << i << ' ' << j << '\n';
        return;
    }
    func(n-1, i, 6 - i - j);
    cout << i << ' ' << j << '\n';
    func(n-1, 6 - i - j, j);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n;
    k = pow(2, n) - 1;
    cout << k << '\n';
    //func(n, 1, 3);
}