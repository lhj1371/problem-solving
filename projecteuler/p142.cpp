#include <bits/stdc++.h>
using namespace std;

double eps = 1e-8;

bool pfsq(int n){
    double x = sqrt((double) n);
    if (abs(x - round(x)) < eps) return true;
    return false;
}

int main(){
    // after some arithmetic, it can be shown that 
    // x = 2i^2 + 2j^2 + k^2, 
    // y = 2i^2 + 2j^2,
    // z = 2i^2 - 2j^2
    // where i>j>0 and 4i^2 + 4j^2 + k^2, 4i^2 + k^2, 4j^2 + k^2 should be perfect square.

    for (int i=2; i<1000; i++){
        for (int j=1; j<i; j++){
            for (int k=1; k<1000; k++){
                if (pfsq(k*k+4*j*j) && pfsq(4*i*i+k*k) && pfsq(4*i*i+4*j*j+k*k)){
                    int x, y, z;
                    x = 2*i*i + 2*j*j + k*k;
                    y = x - k*k;
                    z = 2*(i*i - j*j);
                    cout << "x = " << x << '\n';
                    cout << "y = " << y << '\n';
                    cout << "z = " << z << '\n';
                    cout << "x + y + z = " << x + y + z << '\n';
                    return 0;
                }
            }
        }
    }
}
