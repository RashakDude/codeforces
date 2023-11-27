#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int x;
        cin >> x;
        int arr[x];
        for(int i=0;i<x;i++) cin >> arr[i];
        arr[x-1]<arr[0] ? cout << "NO" << endl : cout << "YES" << endl;
    }
}