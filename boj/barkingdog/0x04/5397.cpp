#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string s;

    cin >> n;
    while (n--){
        cin >> s;
        list<char> txt = {};
        auto cur = txt.end();
        for (auto c: s){
            if (c=='<'){
                if (cur!=txt.begin()) cur--;
            }else if (c=='>'){
                if (cur!=txt.end()) cur++;
            }else if (c=='-'){
                if (cur!=txt.begin()) cur = txt.erase(--cur);
            }else{
                txt.insert(cur, c);
            }
        }
        for (auto c: txt) cout << c;
        cout << '\n';
    }
}