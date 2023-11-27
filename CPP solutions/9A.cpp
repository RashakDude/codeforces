#include <iostream>
#include <string>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int p = max(a,b);
    string s[6] = {"1/6","1/3","1/2","2/3","5/6","1/1"};
    cout << s[6-p];
}