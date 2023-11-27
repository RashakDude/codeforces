#include <iostream>
#include <string>
using namespace std;

int main(){
    string a,b;
    cin >> a >> b;
    int num = a.size(), test = 0;
    for(int i=0;i<num;i++){
        if(a[i]==b[num-i-1]) test++;
    }
    if(test==num) cout << "YES" << endl;
    else cout << "NO" << endl;
}