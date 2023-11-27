#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int e = max (c, a-1-c);
        int f = max (d, b-1-d);
        cout << max (e*b, f*a) << endl; 
    }
}