#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;

    cin >> n >> k;
    list<int> people = {};
    for (int i=1; i<n+1; i++){
        people.push_back(i);
    }

    cout << '<';
    auto cur = people.begin();
    while (n--){
        int cnt = k - 1;
        while (cnt--){
            cur++;
            if (cur==people.end()) cur = people.begin();
        }
        cout << *cur; 
        if (n!=0) cout << ", ";
        cur = people.erase(cur);
        if (cur==people.end()) cur = people.begin();
    }   
    cout << '>';
}