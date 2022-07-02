#include <bits/stdc++.h>
using namespace std;

int main(){
    int num,p1,p2;
    cin >> num >> p1;
    set<int> s;
    for(int i=0;i<p1;i++){
        int t;
        cin >> t;
        s.insert(t);
    }
    cin >> p2;
    for(int i=0;i<p2;i++){
        int t;
        cin >> t;
        s.insert(t);
    }
    bool flag = true;
    for(int i=1;i<=num;i++) if(s.find(i)==s.end()) flag = false;
    !flag ? cout << "Oh, my keyboard!" : cout << "I become the guy.";
}