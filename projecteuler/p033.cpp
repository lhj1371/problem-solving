#include <bits/stdc++.h>
using namespace std;


int main(){
    int retnum = 1, retdem = 1;;
    for (int i=10; i<99; i++){
        for (int j=i+1; j<100; j++){
            if (i%11==0 && j%11==0) continue;
            if (i%10==0 && j%10==0) continue;
            int num[2] = {i/10, i%10};
            int dem[2] = {j/10, j%10};
            for (int x=0; x<2; x++)
                for (int y=0; y<2; y++)
                    if (num[x]==dem[y] && i*dem[1-y] == j*num[1-x]){
                        retnum *= num[1-x]; retdem *= dem[1-y];
                    }
        }
    }

    cout << retnum << " / " << retdem;
}
