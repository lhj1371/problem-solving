#include <bits/stdc++.h>
using namespace std;

int freq[26];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int ret=0;
    string a, b;
    cin >> a >> b;

    for (auto c: a) freq[c - 'a']++;
    for (auto c: b) freq[c - 'a']--;
    for (int i: freq) ret += abs(i);

    cout << ret;
}