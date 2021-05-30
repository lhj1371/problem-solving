#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];

void func(int j){
    if (j==m){
        for (int k=0; k<m; k++) cout << arr[k] << ' ';
        cout << '\n';
        return;
    }
    for (int k=1; k<n+1; k++){
        arr[j] = k;
        func(j+1);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    func(0);
}

