#include <bits/stdc++.h>
using namespace std;

bool isfifth(int n){
    int tmp1 = n, tmp2 = 0;
    while (tmp1>0){
        int t = tmp1%10;
        tmp2 += t*t*t*t*t;
        tmp1 /= 10;
        if (tmp2>n) return false;
    }
    return tmp2==n;

}

int main(){
    int ret = 0;
    for (int i=2; i<360000; i++){ // 6*9^5 ~= 360000
        if (isfifth(i))
            ret += i;
    }

    cout << ret;
}
