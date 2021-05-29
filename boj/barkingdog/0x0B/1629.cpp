#include <bits/stdc++.h>
using namespace std;
unsigned long long func(unsigned long long a, unsigned long long b, unsigned long long c){
    if (b==1) return a%c;
    else if (b%2==0) {
    unsigned long long k = func(a, b/2, c);
        return k * k % c;
    }
    else{
    unsigned long long k = func(a, (b-1)/2, c);
        k = k * k % c;
        return k * a % c;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    unsigned long long a, b, c;
    cin >> a >> b >> c;

    cout << func(a, b, c) << '\n';
}