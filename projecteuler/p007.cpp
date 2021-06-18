#include <bits/stdc++.h>
using namespace std;

int primes[10002];
int nprime;

bool isprime(int n){
    for (int i=0; i<nprime; i++)
        if (n%primes[i]==0) return false;
    return true;
}

int main(){
    int i=2;
    while (nprime<10001){
        if (isprime(i)){
            primes[nprime] = i;
            nprime++;
        }
        i++;
    }


    cout << primes[10000];
}
