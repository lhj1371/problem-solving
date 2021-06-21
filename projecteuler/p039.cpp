#include <bits/stdc++.h>
using namespace std;

int sols[1000];

int main(){
    // a = p^2-q^2, b = 2pq, c = p^2+q^2 with coprime p, q
    // then, perimeter = 2p(p+q)

    for (int p=2; p<23; p++){
        int q = p%2+1;
        while (2*p*(p+q)<1000 && p>q){
            int peri = 2 * p * (p+q);
            int tmp = peri;
            while (tmp<1000){
                sols[tmp]++;
                tmp += peri;
            }

            q += 2;
        }
    }

    int maxsol=0, maxperi;
    for (int i=0; i<1000; i++){
        if (sols[i]>maxsol){
            maxperi = i;
            maxsol = sols[i];
        }
    }
    cout << maxperi;
}
