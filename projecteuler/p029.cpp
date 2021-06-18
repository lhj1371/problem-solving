#include <bits/stdc++.h>
using namespace std;

int primes[100];
int nprime;

struct fstruct{
    int p2, p3, p5, p7, lfactor, b;
};

bool isprime(int n){
    for (int i=0; i<nprime; i++){
        if (primes[i]>=n) break;
        if (n%primes[i]==0) return false;
    }
    return true;
}

int main(){
    for (int i=2; i<100; i++){
        if (isprime(i)){
            primes[nprime] = i;
            nprime++;
        }
    }

    int n = 100;
    int ret = 0;
    fstruct factorized[10105];

    for (int a=2; a<=n; a++){
        int factor[nprime];
        int tmp=a;
        for (int i=0; i<nprime; i++){
            factor[i] = 0;
            int p = primes[i];
            while (tmp%p==0){
                factor[i]++;
                tmp /= p;
            }
        }
        int p2=factor[0], p3=factor[1], p5=factor[2], p7=factor[3];
        int lfactor=0;
        for (int i=4; i<nprime; i++)
            if (factor[i]!=0)
                lfactor = i-4+1;

        for (int b=2; b<=n; b++){
            for (int i=0; i<100*a+b; i++){
                fstruct tmp = factorized[i];
                if (tmp.p2*tmp.b==p2*b && tmp.p3*tmp.b==p3*b && tmp.p5*tmp.b==p5*b && tmp.p7*tmp.b==p7*b){
                    if (lfactor==0){
                        ret--; break;
                    }
                    else if (tmp.lfactor==lfactor && tmp.b==b){
                        ret--; break;
                    }
                } 
            }
            factorized[100*a + b] = {p2, p3, p5, p7, lfactor, b};
            ret++;
        }
    }
    cout << ret;
}
