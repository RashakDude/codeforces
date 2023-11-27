#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int x;
        cin >> x;
        int t=x;
        for(int i=2;i<=sqrt(x);i++){
            if(x%i==0){
                t=i;
                break;
            }
        }
        cout << x/t << " " << x-(x/t) << endl;
    }
}