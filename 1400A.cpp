#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        for(int i=0;i<(n*2)-1;i+=2) cout << s[i];
        cout << endl;
    }
}