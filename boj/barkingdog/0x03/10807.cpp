#include <bits/stdc++.h>
using namespace std;

int freq[201];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k, v;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> k;
        freq[k + 100]++;
    }

    cin >> v;
    cout << freq[v + 100];
}