#include<iostream>
#include<string>
using namespace std;

int main(){
    int a;
    cin >> a;
    int t=0;
    for(int i=0;i<a;i++){
        string n;
        cin >> n;
        switch(n[0]){
            case 'T':t+=4;break;
            case 'C':t+=6;break;
            case 'O':t+=8;break;
            case 'D':t+=12;break;
            case 'I':t+=20;break;
            default:t+=0;
        }
    }
    cout << t;
}