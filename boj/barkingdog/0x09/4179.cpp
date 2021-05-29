#include <bits/stdc++.h>
using namespace std;

struct pos{
    int x, y, d, srt;
};

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int grid[n][m], visited[n][m];
    string txt;
    queue<pos> q;
    int numj;
    pos cur, next;

    for (int i=0; i<n; i++){
        cin >> txt;
        for (int j=0; j<m; j++){
            visited[i][j] = 0;
            auto c = txt[j];
            if (c=='#') grid[i][j] = -1;
            else if (c=='.') grid[i][j] = 0;
            else if (c=='J'){
                grid[i][j] = 1;
                next.x = i; next.y = j; next.d = 1; next.srt = 1;
                numj++;
            } 
            else if (c=='F'){
                grid[i][j] = 2;
                cur.x = i; cur.y = j; cur.d = 1; cur.srt = 2;
                q.push(cur);
                visited[i][j] = 0;
            }
        }
    }
    q.push(next);

    while (!q.empty()){
        cur = q.front();     
        q.pop();
        if (cur.srt==1){
            if (cur.x==0 || cur.x==n-1 || cur.y==0 || cur.y == m-1){
                cout << cur.d << '\n'; 
                return 0;
        }
        }
        
        for (int k=0; k<4; k++){
            next.x = cur.x + dx[k];
            next.y = cur.y + dy[k];
            next.d = cur.d + 1;
            next.srt = cur.srt;
            if (next.x < 0 || next.x >= n || next.y < 0 || next.y >= m) continue;
            if (visited[next.x][next.y] || grid[next.x][next.y]==-1) continue;
            if (next.srt==2){
                grid[next.x][next.y] = 2;
                visited[next.x][next.y] = 1;
                q.push(next);
                if (grid[next.x][next.y]==1) numj--;
            }else if (next.srt==1 && grid[next.x][next.y]==0){
                
                grid[next.x][next.y] = 1;
                q.push(next);
                numj++;
            }
        }
        if (numj==0){
            cout << "IMPOSSIBLE\n";
            return 0;
        }
    }

    cout << "IMPOSSIBLE\n";
}