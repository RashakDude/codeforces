#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(i%2==0) { if(arr[i]>0) arr[i] *= -1; }
            else { if (arr[i]<0) arr[i] *= -1; }
        }
        for(int i=0;i<n;i++) cout << arr[i] << " ";
        cout << endl;
    }
}