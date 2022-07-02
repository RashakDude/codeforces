#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    char c[n][m];
    for(int i=0;i<n;i+=2){
        for(int j=0;j<m;j++) c[i][j] = '#';
    }
    bool flag = true;
    for(int i=1;i<n;i+=2){
        if(flag){
            for(int j=0;j<m-1;j++) c[i][j] = '.';
            c[i][m-1] = '#';
        }
        else{
            c[i][0] = '#';
            for(int j=1;j<m;j++) c[i][j] = '.';
        }
        flag = !flag;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cout << c[i][j];
        cout << endl;
    }
}