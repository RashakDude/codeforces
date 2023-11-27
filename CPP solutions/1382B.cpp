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
        int i=0;
        while(arr[i]==1 && i<x) i++;
        if(i!=x) i++;
        i%2==0 ? cout << "Second" << endl : cout << "First" << endl;
    }
}