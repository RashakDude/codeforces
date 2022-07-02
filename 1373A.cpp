#include<iostream>
using namespace std;

int main()
{
	long long int t,a,b,c,p,q;
	cin >> t;
	while(t--)
	{
		cin >> a >> b >> c;
		p = (c<a*b) ? b : -1;
		q = (a<c) ? 1 : -1;
		cout << q << " " << p << endl;
	}
}