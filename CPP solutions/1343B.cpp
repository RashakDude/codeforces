#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int n;
        cin >> n;
        if(n%4!=0) cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            for(int i=1;i<=n/2;i++) cout << i*2 << " ";
            for(int i=1;i<n/2;i++) cout << i*2-1 << " ";
            cout << 3*(n/2) -1 << endl;
        }
    }
}