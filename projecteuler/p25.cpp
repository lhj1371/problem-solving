#include <bits/stdc++.h>
#include <cmath>
using namespace std;

double logfib(int n){
    // approximate to the dominating first term
    return (n * log(1/2. + sqrt(5)/2.) - log(sqrt(5))) / log(10);
}

int main(){
    // using the fact that F_n = ((1/2 + sqrt(5)/2)^n - (1/2 - sqrt(5)/2)^n) / sqrt(5)
    int i=1;
    while (logfib(i)<999){
        i++;
    }
    cout << i;
}
