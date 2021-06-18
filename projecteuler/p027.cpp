#include <bits/stdc++.h>
using namespace std;

int primes[10000];
int nprime;

bool isprime(int n){
    if (n<=1) return false;
    for (int i=0; i<nprime; i++){
        if (primes[i]>=n) break;
        if (n%primes[i]==0){
            return false;
        }
    }
    return true;
}

int func(int a, int b, int n){
    return n*n + a*n + b;
}

int nseq(int a, int b){
    int ret = 0;
    while(true){
        if (!isprime(func(a, b, ret))) return ret;
        ret++;
    }
}

int main(){
    for (int i=2; i<30000; i++){
        if (isprime(i)){
            primes[nprime] = i;
            nprime++;
        }
    }

    int ret = 0;
    int maxa, maxb;
    for (int a=-999; a<1000; a++){
        for (int b=-1000; b<=1000; b++){
            int tmp = nseq(a, b);
            if (tmp>ret){
                ret = tmp;
                maxa = a;
                maxb = b;
            }
        }
    }
    cout << maxa * maxb; 
}
