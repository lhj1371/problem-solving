#include <bits/stdc++.h>
using namespace std;

int freq[10];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, a, b, c;
    cin >> a >> b >> c;
    n = a * b * c;

    while(n>0){
        freq[n % 10]++;
        n /= 10;
    }    

    for (int i: freq){
        cout << i << '\n';
    }
}   