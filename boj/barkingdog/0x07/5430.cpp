#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, k;
    string p, arr, nums;
    cin >> t;
    while (t--){
        cin >> p >> n >> arr;
        bool rev = false, err = false;
        deque<int> dq;

        k = 0;
        for (char c: arr){
            if (c=='[' || c==']' || c==','){
                if (k>0) dq.push_back(k);
                k = 0;
            }else{
                k *= 10;
                k += c - (int)'0';
            }
        }

        for (char c: p){
            if (c=='R'){
                rev = !rev;
            }else if (c=='D'){
                if (dq.empty()){
                    err = true;
                }
                else if (rev){
                    dq.pop_back();
                }else if (!rev){
                    dq.pop_front();
                }
            }
        }

        if (err){
            cout << "error\n";
        }else{
            cout << '[';
            if (rev){
                while (!dq.empty()){
                    cout << dq.back();
                    dq.pop_back();
                    if (!dq.empty()) cout << ',';
                }
            }else{
                while (!dq.empty()){
                    cout << dq.front();
                    dq.pop_front();
                    if (!dq.empty()) cout << ',';
                }
            }
            cout << "]\n";
        }
    }
}