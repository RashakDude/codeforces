#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int sum=0;
        int num;
        for(int i=0;i<a;i++){
            cin >> num;
            sum+=num;
        }
        cout << min(sum,b) << endl;
    }
}