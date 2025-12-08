#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,n;
    cin>>x>>n;
    int workdays=0;
    for (int i=0;i<n;i++){
        int current=(x+i-1)%7+1;
        if (current>=1&&current<=5) workdays++;
    }
    long long km=workdays*250;
    cout<<km;
    return 0;
}