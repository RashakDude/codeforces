#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int n;
        cin >> n;
        int b[6] = {0,0,0,0,0,0}, i=0 ,k=0;
        while(n>0){
            b[i] = n%10;
            i++;
            n/=10;
        }
        for(int i=0;i<6;i++) { if(b[i]!=0) k++; }
        cout << k << endl;
        for(int i=0;i<6;i++) { if(b[i]!=0) cout << b[i] * pow(10,i) << " " ; }
        cout << endl;
    } 
}