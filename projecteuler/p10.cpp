#include <bits/stdc++.h>
using namespace std;

int primes[2000000];
int nprime;

bool isprime(int n){
    for (int i=0; i<nprime; i++){
        if (n%primes[i]==0) return false;
        if (primes[i]*primes[i]>n) break;
    }
    return true;
}

int main(){
    long long ret=0;
    int i=2;
    while (i<2000000){
        if (isprime(i)){
            primes[nprime] = i;
            nprime++;
            ret += i;
        }
        i++;
    }

    cout << ret;
}
