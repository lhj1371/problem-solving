#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string text;
    bool b;
    int i, n;
    cin >> n;
    
    while (n--){
        cin >> text;
        i = 0;
        b = true;
        for (char c: text){
            if (c=='('){
                i++;
            }else if (c==')'){
                i--;
            }

            if (i<0) b = false;
        }
        if (i==0 && b) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}