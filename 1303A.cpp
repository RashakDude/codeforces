#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int num;
    cin >> num;
    while(num--){
        string s;
        cin >> s;
        cout << count(s.begin()+s.find_first_of('1'),s.begin()+s.find_last_of('1')+1,'0') << endl;
    }
}