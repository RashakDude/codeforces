#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr,arr+3);
        if(arr[1]!=arr[2]) cout << "No" << endl;
        else{
            cout << "Yes" << endl;
            cout << arr[2] << " "  << arr[0] << " " << 1 << endl;
        }
    }
}