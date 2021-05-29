#include <bits/stdc++.h>
using namespace std;

void swap(int& x, int& y){
    int t;
    if (x > y){
        t = x;
        x = y;
        y = t;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c;
    cin >> a >> b >> c;

    swap(a, b);
    swap(a, c);
    swap(b, c);

    cout << a << ' ' << b << ' ' << c; 
}