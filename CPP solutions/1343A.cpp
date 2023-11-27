#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        long long n;
        cin >> n;
        int k=4, k1=3;
        while(n%k1){
            k1+=k;
            k*=2;
        }
        cout << n/k1 << endl;
    }
}