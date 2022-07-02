#include <bits/stdc++.h>
using namespace std;

long long int arr[] = {1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600};

int main(){
    int n,m;
    cin >> n >> m;
    cout << arr[min(n,m)];
}