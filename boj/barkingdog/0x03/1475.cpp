#include <bits/stdc++.h>
using namespace std;

int freq[10];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, ret;
    cin >> n;
    if (n==0) freq[0]++;
    while (n>0){
        freq[n%10]++;
        n /= 10;
    }
    freq[6] += freq[9];
    freq[6] = freq[6]/2 + freq[6]%2;

    ret = 0;
    for (int i=0; i<9; i++){
        if (freq[i]>ret) ret = freq[i];
    }

    cout << ret;
}