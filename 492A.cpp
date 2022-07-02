#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i=0;
    for(;(i*(i+1)*(i+2))/6<=n;i++);
    cout << i-1 << endl;
}