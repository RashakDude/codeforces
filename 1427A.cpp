#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int n;
        cin >> n;
        int arr[n];
        int sum = 0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            sum += arr[i];
        }
        if(sum==0){
            cout << "NO" << endl;
            continue;
        }
        else{
            sort(arr,arr+n);
            if(sum>0) reverse(arr,arr+n);
            cout << "YES" << endl;
            for(int i=0;i<n;i++) cout << arr[i] << " ";
            cout << endl;
        }
    }
}