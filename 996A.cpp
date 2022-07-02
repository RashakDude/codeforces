#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    cout << (a/100 + a/20 %5 + a/10 %2 + a/5 %2 + a%5);
}