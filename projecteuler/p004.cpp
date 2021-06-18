#include <bits/stdc++.h>
using namespace std;

int ret, tmp;

bool ispld(int n){
    int i = n;
    int j = 0;
    while (i>0){
        j *= 10;
        j += i%10;
        i /= 10;
    }
    return n==j;
}

int main(){
    for (int i=100; i<1000; i++){
        for (int j=100; j<1000; j++){
            tmp = i*j;
            if (tmp>ret && ispld(tmp)) ret = tmp;
        }
    }

    cout << ret;
}
