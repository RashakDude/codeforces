#include<bits/stdc++.h>
using namespace std;
double PI=acos(-1);

double gcd(double a,double b){
    return a<0.01 ? b : gcd(fmod(b,a),a);
}

int main(){
    double x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    double b = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    double c = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    double p = (a+b+c)/2.0;
    double s = sqrt(p*(p-a)*(p-b)*(p-c));
    double r = a*b*c/(4*s);
    double x = 2*asin(a/(2*r));
    double y = 2*asin(b/(2*r));
    double z = 2*PI-x-y;
    p = gcd(x,gcd(y,z));
    cout << fixed << setprecision(6) << PI*r*r*sin(p)/p << endl;
}