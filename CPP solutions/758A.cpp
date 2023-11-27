#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a,b,c=0,d=0;
    cin >> a;
    for(int i=0;i<a;i++){
        cin >> b;
        c = max(b,c);
        d+=b; 
    }
    cout << c*a - d;
}