#include <iostream>
#include <set>
using namespace std;

int main(){
    int a; cin >> a;
    while(a--){
        set<int> s;
        int b; cin >>b;
        int num[b];
        for(int i=0;i<b;i++){
            cin >> num[i];
            s.insert(num[i]);
        }
        cout << s.size() << endl;
    }
}