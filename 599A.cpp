#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z;
	cin >> x >> y >> z;
	cout << min((x+y+z),min(2*(x+y),min(2*(x+z),2*(z+y))));
}