#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int a;
        cin >> a;
        int ans=0;
        for(int i=0;i<a;i++) {
            int x;
            cin >> x;
            if(x%2 == 0) ans = i+1;
        }
        if(ans) cout << 1 << endl << ans << endl;
        else{
            if(a==1) cout << -1 << endl;
            else cout << 2 << endl << 1 << " " << 2 << endl;
        }
    }
}