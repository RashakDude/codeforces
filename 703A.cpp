#include <iostream>
using namespace std;

int main(){
    int a,m=0,c=0;
    cin >> a;
    for(int i=0;i<a;i++){
        int one,two;
        cin >> one >> two;
        if(one>two) m++;
        if(one<two) c++;
    }
    if(m>c) cout << "Mishka";
    if(m<c) cout << "Chris";
    if(m==c) cout << "Friendship is magic!^^";
}