#include <iostream>
using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	while(240-k < (n*(n+1)*5)/2 )
	n--;
	cout << n;
}