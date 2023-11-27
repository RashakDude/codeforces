#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    char arr[n][m];
    bool flag = true;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
            if(arr[i][j]=='C'||arr[i][j]=='Y'||arr[i][j]=='M') flag = false;
        }
    }
    flag ? cout << "#Black&White" << endl : cout << "#Color" << endl;
}