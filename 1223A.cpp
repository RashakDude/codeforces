#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a;
    for(int i=0;i<a;i++){
        cin >> b;
        if(b<4)
        cout << 4-b << endl;
        else
        cout << b%2 << endl;
    }
}