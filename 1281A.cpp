#include <iostream>
#include <string>
using namespace std;

int main(){
    int a;
    cin >> a;
    string s;
    for(int i=0;i<a;i++){
        cin >> s;
        int t = s.size();
        switch(s[t-1]){
            case 'o': cout << "FILIPINO" << endl; break;
            case 'u': cout << "JAPANESE" << endl; break;
            default: cout << "KOREAN" << endl;
        }
    }
}