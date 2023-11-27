#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        long long int a,b,c;
        cin >> a >> b >> c;
        b = a-b;
        cout << (c/2)*b + (c%2)*a << endl;
    }
}