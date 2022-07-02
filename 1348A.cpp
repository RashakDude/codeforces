#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num,mun;
    cin >> num;
    while(num--){
        cin >> mun;
        cout << pow(2, mun/2 +1) - 2 << endl;
    }
}