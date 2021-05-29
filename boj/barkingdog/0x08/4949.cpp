#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string txt;

    while (true){
        getline(cin, txt);
        if (txt == ".") break;
        
        stack<int> s;
        string ret = "yes";
        for (auto c: txt){
            if (c=='['){
                s.push(2);
            }else if (c=='('){
                s.push(1);
            }else if (c==']'){
                if (!s.empty() && s.top()==2){
                    s.pop();
                }else{
                    ret = "no";
                }
            }else if (c==')'){
                if (!s.empty() && s.top()==1){
                    s.pop();
                }else{
                    ret = "no";
                }
            }
        }
        if (!s.empty()) ret = "no";

        cout << ret << '\n';
    }
}