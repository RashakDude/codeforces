#include <iostream>
using namespace std;

int main(){
    int num, s=0, m=0;
    cin >> num;
    while(num--){
        int a,b;
        cin >> a >> b;
        s -= (a-b);
        if(s>m) m=s;
    }
    cout << m;
}