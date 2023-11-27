#include <iostream>
using namespace std;

int main(){
    int a,b, num=0;
    cin >> a >> b;
    for(int i=0;i<a;i++){
        int c;
        cin >> c;
        if(c>b)
        num++;
    }
    cout << num+a;
}