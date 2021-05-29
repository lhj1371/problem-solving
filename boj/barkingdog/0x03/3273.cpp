#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x, ret;
    ret = 0;
    cin >> n;

    int nums[n];
    for (int& i: nums) cin >> i;

    cin >> x;
    int occurs[x];
    for (int& i: occurs) i = 0;
    for (int i: nums){
        if (i < x){
            ret += occurs[x - i];
            occurs[i]++;
        }
    }

    cout << ret;
}