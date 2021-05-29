#include <bits/stdc++.h>
using namespace std;

struct tower{
    int count;
    int height;
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    stack<tower> s;
    cin >> n;

    for (int i=1; i<=n; i++){
        tower t;
        t.count = i;
        cin >> t.height;

        while (!s.empty() && s.top().height<t.height){
            s.pop();
        }
        if (s.empty()){
            cout << 0 << ' ';
        }else{
            cout << s.top().count << ' ';
        }
        s.push(t);
    }
}