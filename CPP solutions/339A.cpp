#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    int num = (s.size()/2)+1;
    int arr[num];
    for(int i=0;i<s.size();i+=2){
        arr[i/2] = int(s[i])-48;
    }
    sort(arr,arr+num);
    for(int i=0;i<num-1;i++){
        cout << arr[i] << '+';
    }
    cout << arr[num-1];
}