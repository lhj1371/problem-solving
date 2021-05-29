#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, h;
    uint ret;
    stack<int> s;
    cin >> n;

    ret = 0;
    for (int i=0; i<n; i++){
        cin >> h;
        while (!s.empty() && s.top()<=h){
            s.pop();
        }
        ret += s.size();
        s.push(h);
    }

    cout << ret << '\n';
}