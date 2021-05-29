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
    string txt;

    for (int i=0; i<n; i++){
        cin >> txt;
        for (int j=0; j<m; j++){
            grid[i][j] = txt[j] - '0';
        }
    }

    queue<tuple<int, int, int>> q;
    q.push({0, 0, 1});
    grid[0][0] = 0;
    while (!q.empty()){
        tuple<int, int, int> cur = q.front();
        int x = get<0>(cur), y=get<1>(cur), d=get<2>(cur);        
        if (x == n-1 && y == m-1){
            cout << d << '\n'; break;
        }
        q.pop();
        for (int k=0; k<4; k++){
            int newx = x + dx[k];
            int newy = y + dy[k];
            int newd = d + 1;
            if (newx < 0 || newx >= n || newy < 0 || newy >= m) continue;
            if (grid[newx][newy] == 0) continue;
            grid[newx][newy] = 0;
            q.push({newx, newy, newd});
        }
    }
}