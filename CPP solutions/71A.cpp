#include<iostream>
#include<string>
using namespace std;

int main(){
    int a;
    cin >> a;
    for(int i=0; i<a; i++){
        string x;
        cin >> x;
        int b = x.length();
        if(b>10)
        cout << x[0] << b-2 << x[b-1] << '\n';
        else
        cout << x << '\n'; 
    }
}