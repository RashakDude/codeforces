#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++) cin >> a[i] >> b[i] >> c[i];
    int sum1=0,sum2=0,sum3=0;
    for(int i=0;i<n;i++) sum1+=a[i],sum2+=b[i],sum3+=c[i];
    (sum1==0 && sum2==0 && sum3==0) ? cout << "YES" : cout << "NO";
}