#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    int l = s.size();
	    int f = s[0]-'0';
	    cout << 10*(f-1)+(l*(l+1)/2) << endl;
	}
}