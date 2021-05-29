#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    list<char> cmd;
    stack<int> s;

    cin >> n;
    int nums[n];
    for (int i=0; i<n; i++){
        cin >> nums[i];
    }

    int j, k; // j is nums idx, k is 1-n idx
    j = 0;
    k = 1;
    while (true){
        if (s.empty() || s.top()!=nums[j]){
            if (k > n){
                cout << "NO" << '\n';
                break;
            }
            s.push(k);
            cmd.push_back('+');
            k++;
        }else{
            s.pop();
            cmd.push_back('-');
            j++;
        }

        if (j >= n){
            for (char c: cmd){
                cout << c << '\n';
            }
            break;
        }
    }
}