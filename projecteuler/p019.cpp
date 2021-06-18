#include <bits/stdc++.h>
using namespace std;

int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
    int start = 0;
    start += 365;
    start = start%7;

    int ret = 0;

    for (int year=1901; year<=2000; year++){
        for (int month=1; month<=12; month++){
            if (start==6) ret++;
            start = (start+days[month-1])%7;
            if (month==2 && year%4==0){
                start = (start+1)%7;
            }
        }
    }
    
    cout << ret;
}
