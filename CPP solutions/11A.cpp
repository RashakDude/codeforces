#include <iostream>
using namespace std;

int main(){
	long long int n,d,c=0,k;
	cin >> n >> d;
	long long int a[n];
	for(long long int i=0;i<n;i++) cin >> a[i];
	for(long long int i=0;i<n-1;i++){
		if(a[i]>=a[i+1]){
			k=(a[i]-a[i+1])/d;
			k++;
			a[i+1]=a[i+1]+k*d;
			c+=k;
		}
	}
	cout << c;
}