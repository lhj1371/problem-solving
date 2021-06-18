#include <bits/stdc++.h>
using namespace std;

int primes[1000];
int nprime;

bool isprime(int n){
    for (int i=0; i<nprime; i++){
        if (n%primes[i]==0) return false;
        if (primes[i]*primes[i]>n) break;
    }
    return true;
}

int divisors(int n){
    int factor[1000];

    for (int i=0; i<nprime; i++){
        factor[i] = 0;
        int p = primes[i];
        while (n%p==0){
            factor[i]++;
            n /= p;
        }
    }

    int ret = 1;
    for (int i=0; i<nprime; i++){
        ret *= factor[i]+1;
    }

    return ret;
}

int main(){
    int i=2;
    while (i<5000){
        if (isprime(i)){
            primes[nprime] = i;
            nprime++;
        }
        i++;
    }
    cout << divisors(28) << '\n';

    i=1;
    while (true){
        int tri = i * (i+1) / 2;
        if (divisors(tri)>500){
            cout << tri;
            break;
        }
        i++;
    }
}
