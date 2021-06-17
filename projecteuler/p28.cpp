#include <bits/stdc++.h>
using namespace std;

int main(){
    // a_1 = 1
    // a_{n+1} = a_n + 4*(2n-1)^2 + 20n
    // find a_501

    long long ret = 1;
    int n = 501;
    for (int i=1; i<n; i++){
        ret += 4*(2*i-1)*(2*i-1) + 20*i;
    }
    cout << ret;
}
