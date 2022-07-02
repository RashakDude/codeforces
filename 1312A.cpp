#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int a,b;
        cin >> a >> b;
        a%b == 0 ? cout << "YES" << endl : cout << "NO" << endl;
    }
}