#include<iostream>
#include<string>
using namespace std;

int main(){
    string a;
    cin >> a;
    int t=0;
    for(int i=0;i<5;i++){
        string b;
        cin >> b;
        if(b[0]==a[0])
        t+=1;
        if(b[1]==a[1])
        t+=1;
    }
    if(t==0)
    cout << "NO";
    else
    cout << "YES";
}