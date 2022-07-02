#include <iostream>
using namespace std;

int main(){
    int in,a,b,c,k=0;
    cin >> in;
    for(int i=0;i<in;i++){
        cin >> a >> b >> c;
        if(a+b+c > 1)
        k++;
    }
    cout << k;
}