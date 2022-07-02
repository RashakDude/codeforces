#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        long long a,b,c,d;
        cin >> a >> b >> c >> d;
        long long distance = b-a;
        long long speed = c+d;
        if (distance % speed == 0) cout << distance / speed << endl;
        else cout << -1 << endl; 
    }
}