#include <iostream>
#include <string>
using namespace std;

int main(){
    long long int a,b,c,d;
    long long int num=0;
    cin >> a >> b >> c >> d;
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') num+=a;
        if(s[i]=='2') num+=b;
        if(s[i]=='3') num+=c;
        if(s[i]=='4') num+=d; 
    }
    cout << num;
}