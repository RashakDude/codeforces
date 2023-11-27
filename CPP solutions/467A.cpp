#include <iostream>
using namespace std;

int main(){
    int num,test=0;
    cin >> num;
    while(num--){
        int a,b;
        cin >> a >> b;
        if((b-a)>1) test++;
    }
    cout << test;
}