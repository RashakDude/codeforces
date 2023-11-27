#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    cout << "I hate ";
    for(int t=1; t<a; t++){
        if(t%2==0)
        cout << "that I hate ";
        else
        cout << "that I love ";        
    }
    cout << "it";
}