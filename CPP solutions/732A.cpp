#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int ans = 1;
    while(ans*n%10!=m && ans*n%10!=0) ans++;
    cout << ans;
}