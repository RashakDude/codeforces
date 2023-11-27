#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, num=0;
    string s;
    cin >> a;
    while(a--){
        cin >> s;
        s[1] == '+' ? num++ : num--;
    }
    cout << num;
}