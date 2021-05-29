#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int count[26];
    cin >> s;
    for (int& i: count){
        i = 0;
    }
    for (auto c: s){
        count[c - 'a']++;
    }
    for (int i: count){
        cout << i << ' ';
    }
}