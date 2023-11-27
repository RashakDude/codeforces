#include<iostream>
using namespace std;
int p,q=999,x,a,b;

int main(){
    int num;
    cin >> num;
    for(int i;i<num;i++)
    cin >> x, x>p?p=x,b=i:0, x<=q?q=x,a=i:0;
    cout << b+num-a-1-(b>a);
}