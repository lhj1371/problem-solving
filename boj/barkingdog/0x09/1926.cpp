#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int grid[n][m];

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> grid[i][j];
        }
    }

    queue<pair<int, int>> q;
    int maxsz = 0;
    int cnt = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (grid[i][j]==0) continue;
            cnt++;
            q.push({i, j});
            grid[i][j] = 0;
            int sz = 0;
            while (!q.empty()){
                pair<int, int> cur = q.front();
                q.pop();
                sz++;
                for (int k=0; k<4; k++){
                    int newx = cur.first + dx[k];
                    int newy = cur.second + dy[k];
                    if (newx < 0 || newx >= n || newy < 0 || newy >= m) continue;
                    if (grid[newx][newy] == 0) continue;
                    grid[newx][newy] = 0;
                    q.push({newx, newy});
                }
            }
            if (sz > maxsz) maxsz = sz;
        }
    }

    cout << cnt << '\n' << maxsz << '\n';
}