#include <iostream>
using namespace std;

int main(){
	int k2,k3,k5,k6;
	cin >> k2 >> k3 >> k5 >> k6;
	int t = min(min(k2,k5),k6);
	int h = min(k3,k2-t);
	cout << 32*h + 256*t;
}