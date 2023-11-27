#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int a, sum=0, zero=0;
        cin >> a;
        for(int i=0;i<a;i++){
            int x;
            cin >> x;
            if(x == 0) zero++;
            sum+=x;
        }
        sum+=zero;
        if(sum!=0) cout << zero << endl;
        if(sum==0) cout << zero+1 << endl;
    }
}