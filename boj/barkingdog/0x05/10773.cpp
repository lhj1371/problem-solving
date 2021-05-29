#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k, n;
    stack<int> s;

    cin >> k;
    for (int i=0; i<k; i++){
        cin >> n;
        if (n == 0){
            s.pop();
        }else{
            s.push(n);
        }
    }

    n = 0;
    while (!s.empty()){
        n += s.top();
        s.pop();
    }
    cout << n << '\n';
}