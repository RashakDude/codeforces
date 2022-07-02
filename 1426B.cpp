#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int n,x;
        cin >> n >> x;
        bool flag = false;
        int arr[n][4];
        for(int i=0;i<n;i++){
            for(int j=0;j<4;j++) cin >> arr[i][j];
        }
        for(int i=0;i<n;i++){
            if(arr[i][1]==arr[i][2] && x%2==0) flag = true;
        }
        flag ? cout << "YES" << endl : cout << "NO" << endl;
    }
}