#include <bits/stdc++.h>
using namespace std;

int main(){
    set<char> s;
    char c;
    while(cin >> c){
        if(isalpha(c)) s.insert(c);
    }
    cout << s.size();
}