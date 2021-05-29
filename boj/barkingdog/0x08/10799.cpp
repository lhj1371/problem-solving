#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string text;
    stack<int> s;
    int i = 0, ret = 0;
    cin >> text;

    for (char c: text){
        if (c=='('){
            s.push(i);
        }else if (c==')'){
            if (s.top()==i-1){
                s.pop();
                ret += s.size();
            }else{
                s.pop();
                ret += 1;
            }
        }
        i++;
    }

    cout << ret;
}