#include <bits/stdc++.h>
using namespace std;

int cycle(int n){
    int remains[10000];
    fill(remains, remains+10000, 0);
    int cnt = 1;
    int remain = 1;
    while (remain<n) remain *= 10;
    while (remain>0){
        if (remains[remain]){
            return cnt - remains[remain];
        }
        remains[remain] = cnt;
        remain = remain%n;
        remain *= 10;
        cnt++;
    }
    return 0;
}

int main(){
    int maxcycle = 0;
    int maxd;
    for (int i=1; i<1000; i++){
        int tmp = cycle(i);
        if (tmp > maxcycle){
            maxcycle = tmp;
            maxd = i;
        }
    }

    cout << maxd;
}
