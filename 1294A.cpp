#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        long long a,b,c,d;
        cin >> a >> b >> c >> d;
        d = a+b+c+d;
        if(d%3 == 0){
            d/=3;
            if (d-a>=0 && d-b>=0 && d-c>=0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;
    }
}