#include <bits/stdc++.h>
using namespace std;

int ispand[10000];

int main(){
    int nums[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int ret = 0;
    do {
        int a, b, c;
        a = 0; b = 0; c = 0;
        for (int i=0; i<4; i++){
            if (i<1){
                a *= 10;
                a += nums[i];
            }
            b *= 10; 
            b += nums[i+1];
            c *= 10;
            c += nums[i+5];
        }
        if (a*b==c)
            ispand[c] = 1;

        a = 0; b = 0; c = 0;
        for (int i=0; i<4; i++){
            if (i<2){
                a *= 10;
                a += nums[i];
            }
            if (i<3){
                b *= 10;
                b += nums[i+2];
            }
            c *= 10;
            c += nums[i+5];
        }
        if (a*b==c)
            ispand[c] = 1;
    } while (next_permutation(nums, nums+9));

    for (int i=0; i<10000; i++)
        if (ispand[i])
            ret += i;
    cout << ret;
}
