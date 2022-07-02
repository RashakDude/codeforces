#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    cout << a/2 << endl;
    while(a>3){
        cout << "2 ";
        a-=2;
    }
    cout << a;
}