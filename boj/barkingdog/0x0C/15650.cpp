#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];

void func(int i, int j){
    if (j==m){
        for (int k=0; k<m; k++) cout << arr[k] << ' ';
        cout << '\n';
        return;
    }
    for (int k=i; k<n+1; k++){
        arr[j] = k;
        func(k+1, j+1);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    func(1, 0);
}

