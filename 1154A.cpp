#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    long int num[4];
    for(int i=0;i<4;i++)
    cin >> num[i];
    sort(num,num+4);
    cout << num[3]-num[0] << ' ' << num[3]-num[1] << ' ' << num[3]-num[2];
}