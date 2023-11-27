#include <iostream>
#include <set>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    set<int> s;
    while(a--){
        int n; cin >> n;
        while(n--){
            int m; cin >> m;
            s.insert(m);
        }
    }
    if(s.size()==b) cout << "YES";
    else cout << "NO";
}