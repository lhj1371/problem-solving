#include <bits/stdc++.h>
using namespace std;

struct paren{
    int srt, idx, val;    
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string text;
    stack<paren> s;
    paren p;
    int i, tmp, ret = 0;
    bool right = true;
    cin >> text;

    for (char c: text){
        if (c=='('){
            p.srt = 0;
            p.idx = i;
            p.val = 0;
            s.push(p);
        }else if (c==')'){
            if (s.empty() || s.top().srt!=0){
                right = false;
                break;
            }
            
            p = s.top();
            if(p.idx==i-1){
                s.pop();
                tmp = 2;
            }else{
                tmp = s.top().val;
                tmp *= 2;
                s.pop();                    
            }
            if (s.empty()) ret += tmp;
            else s.top().val += tmp;
        }else if (c=='['){
            p.srt = 1;
            p.idx = i;
            p.val = 0;
            s.push(p);
        }else if (c==']'){
            if (s.empty() || s.top().srt!=1){
                right = false;
                break;
            }
            
            p = s.top();
            if(p.idx==i-1){
                s.pop();
                tmp = 3;
            }else{
                tmp = s.top().val;
                tmp *= 3;
                s.pop();                    
            }
            if (s.empty()) ret += tmp;
            else s.top().val += tmp;
        }
        i++;
    }
    if (!s.empty()) right = false;

    if (right) cout << ret << '\n';
    else cout << 0 << '\n';
}