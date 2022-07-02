#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    int arr[num];
    for(int i=0;i<num;i++) cin >> arr[i];
    int s=0,t=0;
    int left = 0, right = num-1;
    bool test = true;
    while(left<=right){
        if(test){
            if(arr[left]>arr[right]){
                s+=arr[left];
                left++;
            }
            else{
                s+=arr[right];
                right--;
            }
            test = false;
            continue;
        }
        else{
            if(arr[left]>arr[right]){
                t+=arr[left];
                left++;
            }
            else{
                t+=arr[right];
                right--;
            }
            test = true;
            continue;
        }
    }
    cout << s << " " << t << endl; 
}