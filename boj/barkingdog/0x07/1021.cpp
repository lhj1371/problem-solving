#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, k, cnt, ret;
    deque<int> dq;
    cin >> n >> m;

    ret = 0;
    for (int i=1; i<=n; i++){
        dq.push_back(i);
    }
    for (int i=0; i<m; i++){
        cin >> k;
        cnt = 0;
        while (dq.front() != k){
            dq.push_back(dq.front());
            dq.pop_front();
            cnt++;
        }
        if (2*cnt > dq.size()) cnt = dq.size() - cnt;
        ret += cnt;
        dq.pop_front();
    }
    
    cout << ret << '\n';
}