#include <iostream>
using namespace std;

int main(){
    int num=0,a,b,c;
    cin >> a;
    for(int i=0;i<a;i++){
        cin >> b;
        if(b!=c) num++;
        c=b;
    }
    cout << num;
}