#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> m >> n;
    int grid[n][m];
    queue<tuple<int, int, int>> q;

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> grid[i][j];
            if (grid[i][j]==1) q.push({i, j, 0});
        }
    }

    int maxday = -1;
    while (!q.empty()){
        tuple<int, int, int> cur = q.front();
        int x = get<0>(cur), y=get<1>(cur), d=get<2>(cur);
        if (d > maxday) maxday = d;
        q.pop();
        for (int k=0; k<4; k++){
            int newx = x + dx[k];
            int newy = y + dy[k];
            int newd = d + 1;
            if (newx < 0 || newx >= n || newy < 0 || newy >= m) continue;
            if (grid[newx][newy] != 0) continue;
            grid[newx][newy] = 1;
            q.push({newx, newy, newd});
        }
    }
    
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (grid[i][j]==0) {
                cout << -1 << '\n';
                return 0;
            }
        }
    }
    cout << maxday << '\n';
}