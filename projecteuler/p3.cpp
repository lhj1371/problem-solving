#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n = 600851475143;
    long long prime = 2;
    long long ret;
    while (n>1){
        if (n%prime==0){
            n /= prime;
            if (prime>ret) ret = prime;
            prime = 2;
        } else prime++;
    }

    cout << ret;
}
