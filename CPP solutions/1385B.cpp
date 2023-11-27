#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int n;
        cin >> n;
        int arr[2*n];
        int ass[50] = {0};
        for(int i=0;i<n*2;i++) cin >> arr[i];
        for(int i=0;i<n*2;i++){
            if(ass[arr[i]-1]==0){
                cout << arr[i] << " ";
                ass[arr[i]-1]++;
            }
        }
        cout << endl;
    }
}