#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string a;
    cin >> a;
    int nite[4] = {0,0,0,0};
    int len = a.size();
    for(int num=0; num<len; num++){
        switch(a[num]){
            case 'n': nite[0]+=1; break;
            case 'i': nite[1]+=1; break;
            case 't': nite[2]+=1; break;
            case 'e': nite[3]+=1; break;
        }
    }
    nite[0]--;
    nite[0]/=2;
    nite[3]/=3;
    sort(nite,nite+4);
    cout << nite[0];
}