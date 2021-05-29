#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    stack<int> s;
    string cmd;
    
    cin >> n;
    while (n--){
        cin >> cmd;
        if (cmd=="push"){
            cin >> k;
            s.push(k);
        }else if (cmd=="pop"){
            if (s.empty()) cout << -1 << '\n';
            else {
                cout << s.top() << '\n'; 
                s.pop();
            }
        }else if (cmd=="size"){
            cout << s.size() << '\n';
        }else if (cmd=="empty"){
            cout << (int)s.empty() << '\n';
        }else if (cmd=="top"){
            if (s.empty()) cout << -1 << '\n';
            else cout << s.top() << '\n';
        }
    }
}