#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    string s;
    cin >> s;
    int t=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]) t++;
    }
    cout << t;
}