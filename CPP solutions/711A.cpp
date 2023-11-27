#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    char s[num][5];
    bool flag = false;
    for(int i=0;i<num;i++){
        for(int j=0;j<5;j++) cin >> s[i][j];
        if(!flag){
            if(s[i][0]=='O'&&s[i][1]=='O'){
                s[i][0] = s[i][1] = '+';
                flag = true;
            }
            else if(s[i][3]=='O'&&s[i][4]=='O'){
                s[i][3] = s[i][4] = '+';
                flag = true;
            }
        }
    }
    if(flag==true){
        cout << "YES" << endl;
        for(int i=0;i<num;i++){
            for(int j=0;j<5;j++) cout << s[i][j];
            cout << endl;
        }
    }
    else cout << "NO" << endl;
}