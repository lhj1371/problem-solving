#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    deque<int> dq;
    string cmd;

    cin >>n;
    while (n--){
        cin >> cmd;
        if (cmd == "push_front"){
            cin >> k;
            dq.push_front(k);
        }else if (cmd == "push_back"){
            cin >> k;
            dq.push_back(k);
        }else if (cmd == "pop_front"){
            if (!dq.empty()){
                cout << dq.front();
                dq.pop_front();
            }else{
                cout << -1;
            }
        }else if (cmd == "pop_back"){
            if (!dq.empty()){
                cout << dq.back();
                dq.pop_back();
            }else{
                cout << -1;
            }
        }else if (cmd == "size"){
            cout << dq.size();
        }else if (cmd == "empty"){
            cout << (int)dq.empty();
        }else if (cmd == "front"){
            if (!dq.empty()){
                cout << dq.front();
            }else{
                cout << -1;
            }
        }else if (cmd == "back"){
            if (!dq.empty()){
                cout << dq.back();
            }else{
                cout << -1;
            }
        }
        if (cmd != "push_front" && cmd != "push_back") cout << '\n';
    }
}