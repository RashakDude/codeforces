#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int b[100];
    int t = 0 ;
    for(int i=0;i<a;i++){
        cin >> b[i];
        if (b[i]==0)
        t+=1;
    }
    if (t==a)
    cout << "EASY";
    else
    cout << "HARD";
}