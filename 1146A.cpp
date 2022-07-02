#include<iostream>
#include<string>
using namespace std;

int main(){
    string a;
    cin >> a;
    int t=0;
    int m=a.size();
    for(int i=0;i<m;i++){
        if(a[i]=='a')
        t+=1;
    }
    if(t>m/2)
    cout << m;
    else
    cout << ((t*2)-1);
}