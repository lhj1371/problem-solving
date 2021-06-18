#include <bits/stdc++.h>
using namespace std;

int main(){
    // solve Diophantine equation (1000-a)(1000-b) = 500000
    for (int i=0; i<=5; i++){
        for (int j=0; j<=6; j++){
            int x=1<<i, y=1<<(5-i);
            for (int k=0; k<j; k++) x *= 5;
            for (int k=0; k<6-j; k++) y *= 5;
            if (x<1000 && y<1000){
                int a, b, c;
                a = 1000-x;
                b = 1000-y;
                c = 1000 - a - b;
                cout << a*b*c;
                return 0;
            }
        }
    }
}
