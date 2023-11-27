#include<iostream>
using namespace std;
int t,n,a,b,c;

int main(){
    for(cin>>t;t--;cout<<c<<'\n')
        for(cin>>n,c=0,b=-1;n--&&cin>>a;)
            if(a){
                if(b+1)c+=b-n-1;
                b=n;
            }
}