#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        m < 2*n ? cout << "-1 -1" << endl : cout << n << " " << 2*n << endl;
    }
}