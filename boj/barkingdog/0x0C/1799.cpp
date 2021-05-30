#include <bits/stdc++.h>
using namespace std;

int diag1_used[20];
int diag2_used[20];
int grid[10][10];
int n, maxret;

void func(int row, int col, int iseven, int ret){
    if (ret>maxret) maxret = ret;
    for (int j=col; j<n; j+=2){
        if (grid[row][j] && !diag1_used[row+j] && !diag2_used[row-j+10]){
            grid[row][j] = 0;
            diag1_used[row+j] = 1;
            diag2_used[row-j+10] = 1;
            func(row, j+2, iseven, ret+1);
            grid[row][j] = 1;
            diag1_used[row+j] = 0;
            diag2_used[row-j+10] = 0;
        }
    }
    for (int i=row+1; i<n; i++){
        for (int j=i%2==iseven; j<n; j+=2){
            if (grid[i][j] && !diag1_used[i+j] && !diag2_used[i-j+10]){
                grid[i][j] = 0;
                diag1_used[i+j] = 1;
                diag2_used[i-j+10] = 1;
                func(i, j+2, iseven, ret+1);
                grid[i][j] = 1;
                diag1_used[i+j] = 0;
                diag2_used[i-j+10] = 0;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            cin >> grid[i][j];

    func(0, 1, 0, 0);
    func(0, 0, 1, maxret);
    cout << maxret << '\n';
}
