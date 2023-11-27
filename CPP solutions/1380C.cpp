#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int n,x;
        cin >> n >> x;
        int arr[n];
        for(int i=0;i<n;i++) cin >> arr[i];
        sort(arr,arr+n);
        int t=0,k=0;
        for(int i=n-1;i>=0;i--){
            k++;
            if(arr[i]*k>=x){
                t++;
                k=0;
            }
        }
        cout << t << endl;
    }
}