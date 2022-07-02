#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int n;
        cin >> n;
        int sum = 0;
        int x;
        for(int i=0;i<n;i++){
            cin >> x;
            sum += x;
        }
        if(sum%n>0) sum += n;
        cout << sum/n << endl;
    }
}