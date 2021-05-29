#include <bits/stdc++.h>
using namespace std;

int n, ret;
int row_used[15];
int col_used[15];
int diag1_used[30];
int diag2_used[30];

void func(int k, int l){
   if (k==n){
       ret++;
       return;
   }
   for (int j=0; j<n; j++){
       if (!row_used[l] && !col_used[j] && !diag1_used[l-j+15] && !diag2_used[l+j]){
            row_used[l] = 1;
            col_used[j] = 1;
            diag1_used[l-j+15] = 1;
            diag2_used[l+j] = 1;
            func(k+1, l+1);
            row_used[l] = 0;
            col_used[j] = 0;
            diag1_used[l-j+15] = 0;
            diag2_used[l+j] = 0;
       }
   }
   return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    func(0, 0);
    cout << ret << '\n';
}
