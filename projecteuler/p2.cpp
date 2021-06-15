#include <bits/stdc++.h>
using namespace std;

long long ret, i, j, tmp;

int main(){
    i = 1;
    j = 2;
    while (j<4000000){
        if (j%2==0) ret += j;
        tmp = j;
        j += i;
        i = tmp;
    }

    cout << ret;
}
