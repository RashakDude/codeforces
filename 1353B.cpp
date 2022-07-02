#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int n,k;
        cin >> n >> k;
        int a[n],b[n];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];
        sort(b,b+n);
        sort(a,a+n);
        int sum=0;
        int i=0;
        for(;i<k;i++) sum+=max(a[i],b[n-i-1]);
        while(i<n) sum+=a[i++];
        cout << sum << endl;
    }
}