#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char s;
    while(cin >> s){
        if(!strchr("AEIUOYaeiuoy",s)){
            cout << "." << (char)tolower(s);
        }
    }
}