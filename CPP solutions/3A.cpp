#include<iostream>
using namespace std;
    
int main(){
    char a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << max(abs(a-c),abs(b-d)) << endl;
    while(a!=c || b!=d){
        if(a<c) cout << 'R',a++;
        if(a>c) cout << 'L',a--;
        if(b>d) cout << 'D',b--;
        if(b<d) cout << 'U',b++;
        cout << endl;
    }
}