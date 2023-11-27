#include <iostream>
#include <string>
using namespace std;

int main(){
    int a,b;
    string s[20],t[20];
    cin >> a >> b;
    for(int i=0;i<a;i++) cin >> s[i];
    for(int i=0;i<b;i++) cin >> t[i];
    int num;
    cin >> num;
    while(num--){
        int y;
        cin >> y;
        y--;
        cout << s[y%a] << t[y%b] << endl;
    }
}