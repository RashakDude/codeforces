#include <iostream>
using namespace std;

int main(){
    double sum = 0;
    int n;
    cin >> n; 
    for(int i = 0; i < n; i++) {
        double tmp;
        cin >> tmp;
        sum += tmp;
    } 
    cout.precision(17);
    cout << sum / n;
}