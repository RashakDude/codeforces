#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        long long int a,b,c;
        cin >> a >> b >> c;
        cout << (a+b+c)/2 << endl;
    }
}