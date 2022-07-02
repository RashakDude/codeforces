#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        long long int n;
        cin >> n;
        n%2==0 ? cout << n/2 << endl : cout << (n+1)/2 << endl;
    }
}