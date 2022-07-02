#include <iostream>
using namespace std;

int main(){
    int a,b,crime=0,cops=0;
    cin >> a;
    while(cin >> b){
        if(b>0) cops+=b;
        if(b<0 && cops>0) cops--;
        else if(b<0 && cops==0) crime++;
    }
    cout << crime;
}