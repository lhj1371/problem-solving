#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string text;
    int i, n, ret;
    n = 1;
    while (true){
        cin >> text;
        if (text[0] == '-') break;

        i = 0;
        ret = 0;
        for (char c: text){
            if (c=='{'){
                i++;
            }else if (c=='}'){
                if (i==0){
                    ret++;
                    i++;
                }else i--;
            }

            if (i<0) ret++;
        }
        if (i>0) ret += i/2;
        
        cout << n << ". " << ret << '\n';
        n++;
    }
}