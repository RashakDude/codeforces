#include<bits/stdc++.h>
using namespace std;

string x;
int a,s;

int main(){
    cin >> a >> x;
    for(int i=0;i<x.size();i++)
    if(x[i]=='x'&&x[i+1]=='x'&&x[i+2]=='x') s++;
    cout << s;
}