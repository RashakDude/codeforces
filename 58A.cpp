#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    regex_search(s,regex("h.*e.*l.*l.*o")) ? cout << "YES" : cout << "NO";
}