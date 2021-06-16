#include <bits/stdc++.h>
using namespace std;

int grid[20][20];
int dx[4] = {1, 0, 1, 1};
int dy[4] = {0, 1, 1, -1};
long long ret;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i=0; i<20; i++){
        for (int j=0; j<20; j++){
            cin >> grid[i][j];
        }
    }

    for (int i=0; i<20; i++){
        for (int j=0; j<20; j++){
            for (int k=0; k<4; k++){
                int x = i;
                int y = j;
                int tmp = 1;
                if (x+3*dx[k]<20 && y+3*dy[k]<20 && y+3*dy[k]>=0){
                    for (int l=0; l<4; l++){
                        tmp *= grid[x][y];
                        x += dx[k];
                        y += dy[k];
                    }
                    if (tmp>ret){
                        ret = tmp;
                    }
                }
            }
        }
    }

    cout << ret << '\n';
}
