#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long long int a,b,c;
    cin >> a >> b >> c;
    c = c*(c+1)/2;
    a *= c;
    if(a>b) cout << a-b;
    else cout << 0;
}