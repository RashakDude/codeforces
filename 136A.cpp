#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[101];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=1;j<=n;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]==j)
            cout<<i+1<<" ";
        }
    }
}