#include <bits/stdc++.h>
using namespace std;

long long carry = 1000000000;

struct verylong{
    int idx;
    long long n;
    struct verylong *left;
    struct verylong *right;
};

void add(verylong *x, verylong *y, int c){
    long long tmp = x->n + y->n + c;
    if (tmp<carry && x->left==NULL && y->left==NULL){
        x->n = tmp;
        return;
    }
    int tmpc = (int) tmp>carry;
    tmp = tmp%carry;
    x->n = tmp;
    if (x->left==NULL){
        verylong *z = new verylong();
        z->n = 0;
        z->right = x;
        x->left = z;
    }
    if (y->left==NULL){
        verylong *z = new verylong();
        z->n = 0;
        z->right = y;
        y->left = z;
    }
    add(x->left, y->left, tmpc);
}

bool isrightpandigital(verylong *x){
    int isused[10];
    fill(isused, isused+10, 0);
    long long num = x->n;
    while(num>0){
        isused[num%10] = 1;
        num /= 10;
    }
    for (int i=1; i<10; i++){
        if (isused[i]==0) return false;
    }
    return true;
}

bool isleftpandigital(verylong *x){
    if (x->left==NULL) return false;
    int isused[10]; 
    fill(isused, isused+10, 0);
    verylong *y;
    y = x;
    while (y->left!=NULL) y = y->left;

    long long num = y->n;
    for (int i=0; i<9; i++){
        isused[num%10] = 1;
        if (num>9) num /= 10;
        else{
            num = y->right->n;
            for (int j=0; j<i+1; j++) num /= 10;
        }
    }

    for (int i=1; i<10; i++){
        if (isused[i]==0) return false;
    }
    return true;
}

bool ispandigital(verylong *x){
    return isrightpandigital(x) && isleftpandigital(x);
}

int main(){
    verylong *i = new verylong();
    verylong *j = new verylong();
    verylong *tmp = new verylong();
    i->idx = 1; i->n = 1; i->left = NULL; i->right = NULL;
    j->idx = 2; j->n = 1; j->left = NULL; j->right = NULL;
    cout << isleftpandigital(j) << '\n';

    while (!ispandigital(j)){
        add(i, j, 0);
        i->idx += 2;
        tmp = i;
        i = j;
        j = tmp;
        if (j->idx%10000==0) cout << i->idx << ' ' << j->idx << '\n';
    }
    cout << j->idx << '\n';
}
