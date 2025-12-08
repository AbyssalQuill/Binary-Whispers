#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int sides[3]={a,b,c};
    sort(sides,sides+3);
    int minl=sides[0];
    int maxl=sides[2];
    int g=gcd(minl,maxl);
    int numerator=minl/g;
    int denominator=maxl/g;
    cout<<numerator<<"/"<<denominator;
    return 0;
}