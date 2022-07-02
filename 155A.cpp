#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a;
    cin >> n >> a;
    int mx = a, mn = a;
    int ans = 0;
    for(int i=1;i<n;i++){
        cin >> a;
        if(a>mx) mx=a, ans++;
        if(a<mn) mn=a, ans++;
    }
    cout << ans;
}