#include<iostream>
#include<string>
using namespace std;

int main(){
    int a;
    cin >> a;
    string b;
    cin >> b;
    int n=0;
    int z=0;
    for(int i=0;i<a;i++){
        if(b[i]=='z')
        z+=1;
        if(b[i]=='n')
        n+=1;
    }
    for(int t=0;t<n;t++)
    cout << '1' << ' ' ;
    for(int t=0;t<z;t++)
    cout << '0' << ' ' ;
}