#include <bits/stdc++.h>
using namespace std;

int num[500];

void power(){
    int c = 0;
    for (int i=0; i<500; i++){
        int tmp = num[i]*2 + c;
        num[i] = tmp%10;
        c = tmp/10;
    }
}

int main(){
    num[0] = 1;
    for (int i=0; i<1000; i++) power();
    int ret=0;
    for (int i=0; i<500; i++){
        ret += num[i];
    }

    cout << ret;
}
