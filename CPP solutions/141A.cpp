#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b,c;
    cin >> a >> b >> c;
    a+=b;
    sort(a.begin(),a.end());
    sort(c.begin(),c.end());
    a==c ? cout << "YES" : cout << "NO";
}