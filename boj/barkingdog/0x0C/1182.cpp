#include <bits/stdc++.h>
using namespace std;

int n, s, ret;
int arr[20];
int used;

void func(int start, int sum){
    if (start==n){
        ret += sum==s && used>0;
        return;
    }
    used++;
    func(start+1, sum+arr[start]);
    used--;
    func(start+1, sum);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> s;
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    func(0, 0);
    cout << ret << '\n';
}
