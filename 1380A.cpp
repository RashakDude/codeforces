#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++) cin >> arr[i];
        int flag=0;
        for(int i=1;i<n-1;i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                cout << "YES" << endl;
                cout << i << " " << i+1 << " " << i+2 << endl;
                flag=1;
                break;
            }
        }
        if(flag==0) cout << "NO" << endl;
    }
}