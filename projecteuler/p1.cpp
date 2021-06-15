#include <bits/stdc++.h>
using namespace std;

int main(){
    int ret = 0;
    for (int i=1; i<10; i++){
        if (i%3==0 || i%5==0) ret += i;
    }

    cout << ret;
}
