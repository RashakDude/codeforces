#include <iostream>
#include <string>
using namespace std;

int main(){
    int a,l=0,r=0;
    cin >> a;
    string s;
    cin >> s;
    for(int i=0;i<a;i++){
        if(s[i]=='L') l++;
        if(s[i]=='R') r++;
    }
    cout << l+r+1;
}