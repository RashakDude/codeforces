#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        string s;
        cin >> s;
        long long int c=0,res=0;
        for(int i=0;i<s.size();i++){
            res++;
            if(s[i]=='+') c++;
            else c--;
            if(c<0){
                c=0;
                res+=(i+1);
            }
        }
        cout << res << endl;
    }
}