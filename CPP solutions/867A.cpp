#include<iostream>
#include<string>
using namespace std;

int main(){
    int a;
    cin >> a;
    string b;
    cin >> b;
    int stf = 0;
    int fts = 0;
    for(int i=0;i<a-1;i++){
        if(b[i]=='S' && b[i+1]=='F')
        stf += 1;
        if(b[i]=='F' && b[i+1]=='S')
        fts += 1;
    }
    if(stf>fts)
    cout << "YES";
    else
    cout << "NO";
}