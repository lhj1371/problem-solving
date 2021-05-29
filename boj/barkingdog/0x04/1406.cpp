#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    list<char> txt = {};

    string s;
    char command;
    int m;
    bool x;

    cin >> s >> m;
    for (auto c: s) txt.push_back(c);
    auto cur = txt.end();
    for (int i=0; i<m; i++){
        cin >> command;
        switch (command){
            case 'L':
                if (cur != txt.begin()) cur--; break;
            case 'D':
                if (cur != txt.end()) cur++; break;
            case 'B':
                if (cur != txt.begin()){
                    cur--;
                    cur = txt.erase(cur);
                } 
                break;
            case 'P':
                cin >> command;
                txt.insert(cur, command); 
                break;
        }
    }
    //txt.erase(txt.begin());
    for (auto c: txt) cout << c;
    
}