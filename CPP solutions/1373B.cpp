#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        string s;
        cin >> s;
        int t=0,f=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0') f++;
            else t++;
        }
        min(t,f)%2 == 0 ? cout << "NET" << endl : cout << "DA" << endl; 
    }
}