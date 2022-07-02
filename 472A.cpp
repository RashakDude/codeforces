#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    cout << 8 + (num&1) << " " << num - 8 - (num&1) ;
}