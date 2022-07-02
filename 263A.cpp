#include <iostream>
using namespace std;

int main(){
    int a[5][5];
    int b,c;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> a[i][j];
            if(a[i][j] == 1){
                b=i;
                c=j;
            }
        }
    }
    cout << abs(b-2) + abs(c-2);
}