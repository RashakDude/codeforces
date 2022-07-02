#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        arr[i] += k;
    }
    sort(arr,arr+n);
    int count=0;
    n/=3;
    n*=3;
    for(int i=0;i<n;i+=3){
        if(arr[i]<=5 && arr[i+1]<=5 && arr[i+2]<=5) count++;
    }
    cout << count << endl;
}