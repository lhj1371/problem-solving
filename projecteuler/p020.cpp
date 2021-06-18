#include <bits/stdc++.h>
using namespace std;

int carry = 10;

struct verylong{
    int n;
    struct verylong *left;
    struct verylong *right;
};

void add(verylong *x, verylong *y, int c){
    int tmp = x->n + y->n + c;
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

verylong *submult(verylong *x, int c){
    int tmp = x->n * y->n + c;
    if (tmp<carry && x->left==NULL && y->left==NULL){
        x->n = tmp;
        return;
    }
    int tmpc = tmp/carry;
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
