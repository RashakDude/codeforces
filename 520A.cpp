#include <bits/stdc++.h>
using namespace std;

int main(){
    set<char> s;
    int n;
    cin >> n;
    char c;
    while(cin >> c) s.insert(tolower(c));
    s.size() == 26 ? cout << "YES" : cout << "NO";
}