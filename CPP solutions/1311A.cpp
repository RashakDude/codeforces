#include <iostream>
using namespace std;

int main(){
    int q; cin >> q;
    while (q--) {
        int x,y; cin >> x >> y;
        int res=2;
        if (x==y) res=0;
        else if (x<y && (x&1)!=(y&1)) res=1;
        else if (x>y && (x&1)==(y&1)) res=1;
        cout << res << endl;
    }
}