#include <iostream>
using namespace std;
int main() {
    int k,n=0;
    cin>>k;
    double sum=0;
    while (sum<=k){
        n++;
        sum+=1.0/n;
    }
    cout<<n;
    return 0;
}