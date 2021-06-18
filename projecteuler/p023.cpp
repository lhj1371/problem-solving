#include <bits/stdc++.h>
using namespace std;

int primes[30000];
int nprime;
int abun[30000];
int nabun;
int canex[30000];

bool isprime(int n){
    for (int i=0; i<nprime; i++)
        if (n%primes[i]==0) return false;
    return true;
}

int spd(int n){
    int factors[nprime];
    int m = n;
    for (int i=0; i<nprime; i++){
        factors[i] = 0;
        int p = primes[i];
        if (p>n) break;

        while (m%p==0){
            factors[i]++;
            m /= p; 
        }
    }
    int ret = 1;
    for (int i=0; i<nprime; i++){
        int p = primes[i];
        if (p>n) break;
        int tmp1 = 0, tmp2 = 1;
        for (int j=0; j<=factors[i]; j++){
            tmp1 += tmp2;
            tmp2 *= p;
        }
        ret *= tmp1;
    }

    return ret - n;
}

int main(){
    int i=2;
    while (i<10000){
        if (isprime(i)){
            primes[nprime] = i;
            nprime++;
        }
        i++;
    }

    for (int i=2; i<30000; i++){
        if (spd(i) > i){
            abun[nabun] = i;
            nabun++;
        }
    }

    int ret = 0;
    for (int i=0; i<nabun; i++){
        for (int j=0; j<nabun; j++){
            int tmp = abun[i] + abun[j];
            if (tmp<28123)
                canex[tmp] = 1;
        }
    }

    for (int i=0; i<28123; i++){
        if (!canex[i])
            ret += i;
    }

    cout << ret;

    //cout << spd(220) << ' ' << spd(284);

}
