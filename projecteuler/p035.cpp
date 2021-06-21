#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int primes[300000];
int nprime;

bool isprime(int n){
    for (int i=0; i<nprime; i++){
        int p = primes[i];
        if (p*p>n) break;
        if (n%p==0) return false;
    }
    return true;
}

bool iscirc(int n){
    int tmp1 = n;
    do{
        int tmp2 = tmp1%10;
        tmp1 /= 10;
        while ((int)log10(tmp2) <= (int)log10(tmp1))
            tmp2 *= 10;
        tmp1 += tmp2;
        if (!isprime(tmp1))
            return false;
    } while (tmp1!=n);
    return true;
}


int main(){
    int i=2;
    int ret = 0;

    while (i<1000000){
        if (isprime(i)){
            primes[nprime] = i;
            nprime++;
        }
        i++;
    }

    for (int i=2; i<1000000; i++){
        if (isprime(i) && iscirc(i))
            ret += 1;
    }

    cout << ret;
}
