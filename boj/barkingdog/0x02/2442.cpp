#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=2*n - 1; j++){
            if (j >= n + i){
                break;
            }else if (j > n - i){
                cout << '*';
            }else{
                cout << ' ';
            }
        }
        cout << '\n';
    }
}