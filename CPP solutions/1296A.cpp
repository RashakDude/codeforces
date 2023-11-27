#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int a;
        cin >> a;
        int even=0, odd=0;
        for(int i=0;i<a;i++){
            int x; cin >> x;
            if(x%2 == 0) even++;
            else odd++;
        } 
        if(even > 0 && odd > 0) cout << "YES" << endl;
        else if(even == 0 && a%2 != 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}