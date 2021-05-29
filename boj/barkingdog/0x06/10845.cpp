#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    queue<int> q;
    string cmd;

    cin >>n;
    while (n--){
        cin >> cmd;
        if (cmd == "push"){
            cin >> k;
            q.push(k);
        }else if (cmd == "pop"){
            if (!q.empty()){
                cout << q.front();
                q.pop();
            }else{
                cout << -1;
            }
        }else if (cmd == "size"){
            cout << q.size();
        }else if (cmd == "empty"){
            cout << (int)q.empty();
        }else if (cmd == "front"){
            if (!q.empty()){
                cout << q.front();
            }else{
                cout << -1;
            }
        }else if (cmd == "back"){
            if (!q.empty()){
                cout << q.back();
            }else{
                cout << -1;
            }
        }
        if (cmd != "push") cout << '\n';
    }
}