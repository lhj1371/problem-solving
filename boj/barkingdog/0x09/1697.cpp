#include <bits/stdc++.h>
using namespace std;

int visited[100001];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    queue<pair<int, int>> q;
    cin >> n >> k;
    q.push({n, 0});
    visited[n] = 1;

    while (!q.empty()){
        pair<int, int> cur= q.front();
        if (cur.first==k){
            cout << cur.second <<'\n';
            return 0;
        }
        q.pop();
        int nexts[3] = {cur.first-1, cur.first+1, 2*cur.first};
        for (int next: nexts){
            if (next<0 || next>100000 || visited[next]) continue;
            visited[next] = 1;
            q.push({next, cur.second+1});
        }        
    }
}