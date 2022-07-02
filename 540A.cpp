#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    char s1[num],s2[num];
    for(int i=0;i<num;i++) cin >> s1[i];
    for(int i=0;i<num;i++) cin >> s2[i];
    int count = 0;
    for(int i=0;i<num;i++) count += min(abs(s1[i]-s2[i]),10-abs(s1[i]-s2[i]));
    cout << count << endl;
}