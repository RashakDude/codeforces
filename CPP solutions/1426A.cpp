#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int n,x;
        cin >> n >> x;
        if(n==1 || n==2) cout << 1 << endl;
        else{
            n-=2;
            if(n%x>0) n+=x;
            cout << (n/x)+1 << endl;
        }
    }
}