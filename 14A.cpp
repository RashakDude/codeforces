#include <iostream>
using namespace std;

int main(){
    int n, m, x1=0, y1=0;
	cin>>n>>m;
	int x0=n, y0=m;
	string s[n];
	for (int i=0; i<n; i++) {
		cin>>s[i];
		for (int j=0; j<m; j++) if (s[i][j]=='*') {
			x0 = min(i, x0); y0 = min(j, y0);
			x1 = max(i, x1); y1 = max(j, y1);
		}
	}
	for (int i=x0; i<=x1; i++) cout << s[i].substr(y0, y1-y0+1) << endl;
}