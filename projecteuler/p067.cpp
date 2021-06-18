#include <bits/stdc++.h>
using namespace std;

int grid[100][100];
int dp[100][100];



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ifstream input("p67_triangle.txt");

    for (int i=0; i<100; i++)
        for (int j=0; j<=i; j++)
            input >> grid[i][j];

    for (int i=0; i<100; i++){
        for (int j=0; j<=i; j++){
            if (i==0 && j==0) dp[i][j] = grid[i][j];
            else if (j==0) dp[i][j] = dp[i-1][j] + grid[i][j];
            else dp[i][j] = max(dp[i-1][j], dp[i-1][j-1]) + grid[i][j];
        }
    }

    int ret=0;
    for (int j=0; j<=100; j++)
        if (dp[99][j]>ret)
            ret = dp[99][j];
    cout << ret;
}
