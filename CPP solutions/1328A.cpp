#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    for(int i=0;i<a;i++){
        int b,c;
        cin >> b >> c;
        if(b%c!=0) cout << c-(b%c) << endl;
        else cout << 0 << endl;
    }
}