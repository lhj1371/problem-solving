#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long a, b, t;
    cin >> a >> b;
    if (a>b){
        t = a;
        a = b;
        b = t;
    }
    cout << max(int(b - a - 1), 0) << '\n';

    for (long i=a+1; i<b; i++){
        cout << i << ' ';
    }
}