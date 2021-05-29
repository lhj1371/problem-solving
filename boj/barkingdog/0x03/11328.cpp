#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    bool check;
    string s1, s2;
    int freq[26];

    cin >> n;
    for (int i=0; i<n; i++){
        for (int j=0; j<26; j++){
            freq[j] = 0;
        }

        cin >> s1 >> s2;
        for (auto c: s1){
            freq[c - 'a']++;
        }
        for (auto c: s2){
            freq[c - 'a']--;
        }

        check = true;
        for (int i: freq){
            if (i!=0) check=false;
        }
        if (check){
            cout << "Possible\n";
        }else{
            cout << "Impossible\n";
        }
    }
}