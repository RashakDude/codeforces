#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int m,n;
        cin >> m >> n;
        int arr1[m],arr2[n];
        for(int i=0;i<m;i++) cin >> arr1[i];
        for(int i=0;i<n;i++) cin >> arr2[i];
        bool flag = false;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr1[i]==arr2[j]){
                    flag = true;
                    cout << "YES" << endl;
                    cout << 1 << " " << arr1[i] << endl;
                    break;
                }
            }
            if(flag == true) break;
        }
        if(flag == false) cout << "NO" << endl;
    }
}