#include <bits/stdc++.h>
using namespace std;

int n, m;
int nums[10];
int arr[10];
int used[10];

void func(int k){
    if (k==m){
        for (int i=0; i<m; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i=0; i<n; i++){
        if (!used[i]){
            arr[k] = nums[i];
            used[i] = 1;
            func(k+1);
            used[i] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i=0; i<n; i++) cin >> nums[i];
    sort(nums, nums+n);
    func(0);
}
