#include<iostream>
using namespace std;

int main(){
    long long int a,n,m;
    cin >> n >> m >> a;
    if(n%a==0)
    n/=a;
    else
    {n/=a;n++;}
    if(m%a==0)
    m/=a;
    else
    {m/=a;m++;}
    cout << n*m;
}