#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> one,two,three;
    int x;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x==1) one.push_back(i+1);
        else if(x==2) two.push_back(i+1);
        else three.push_back(i+1);
    }
    int t = min(one.size(),min(two.size(),three.size()));
    cout << t << endl;
    for(int i=0;i<t;i++){
        cout << one[i] << " " << two[i] << " " << three[i] << endl;
    }
}