#include <iostream>
using namespace std;

int main(){
    string s;
    int add=0,ans=0;
	while(getline(cin,s)){
		if(s[0]=='+') add++;
        else if(s[0]=='-') add--;
        else ans += add*(s.size()-s.find(":")-1);
	}
	cout << ans;
}