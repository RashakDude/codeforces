#include<bits/stdc++.h>
using namespace std;

int main(){
    char c;
    char x = 'a';
    int ans = 0;
	while(cin >> c){
		ans += min(abs(x-c),26-abs(c-x));
		x = c;
	}
	cout << ans;
}