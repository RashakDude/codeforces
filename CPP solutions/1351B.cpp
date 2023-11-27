#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int a1,b1,a2,b2;
        cin >> a1 >> b1 >> a2 >> b2;
        if(a1>b1) swap(a1,b1);
        if(a2>b2) swap(a2,b2);
        if(b1==b2 && a1+a2==b1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}