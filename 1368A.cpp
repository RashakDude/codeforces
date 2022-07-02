#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int a,b,n,t=0;
        cin >> a >> b >> n;
        while(a<=n && b <=n){
            if(a<b) a+=b;
            else b+=a;
            t++;
        }
        cout << t << endl;
    }
}