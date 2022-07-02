#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    int n,m;
    while(num--){
        cin >> n >> m;
        if(n==1 || m==1 || (n==2 && m==2)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
