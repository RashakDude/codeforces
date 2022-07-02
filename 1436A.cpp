#include<iostream>
using namespace std;

int t,n,m;

int main(){
	cin >> t;
	while(t--){
		cin >> n >> m;
		int sum = 0;
		for(int i=1;i<=n;i++){
			int x;
			cin >> x;
			sum += x;
		}
		if(sum==m) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}