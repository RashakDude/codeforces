#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int n,l=0,m=0;
        cin >> n;
        while(n--){
            char c;
            cin >> c;
            if(c=='(') l++;
            else l--;
            m = min(l,m);
        }
        cout << (-1)*m << endl;
    }
}
