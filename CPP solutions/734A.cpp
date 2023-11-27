#include <iostream>
#include <string>
using namespace std;

int main(){
    long long int a=0,d=0,num;
    char b;
    cin >> num;
    for(long long int i=0;i<num;i++){
        cin >> b;
        if(b=='A')
        a++;
        else
        d++;
    }
    if(a>d)
    cout << "Anton";
    else if(a<d)
    cout << "Danik";
    else
    cout << "Friendship";
}