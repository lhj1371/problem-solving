#include <bits/stdc++.h>
using namespace std;

int students[12];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k, s, y, ret;
    cin >> n >> k;
    ret = 0;

    for (int i=0; i<n; i++){
        cin >> s >> y;
        students[6*s + y - 1]++;
    }

    for (int i: students){
        while (i>0){
            i -= k;
            ret++;
        }
    }
    cout << ret;
}