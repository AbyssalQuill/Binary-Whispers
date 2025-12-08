#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    float money;
    cin>>n;
    if(n<=150){
        money=n*0.4463;
    }
    else if(n<400){
        money=150*0.4463+(n-150)*0.4663;
    }
    else 
    money=150*0.4463+250*0.4663+(n-400)*0.5663;
    cout<<fixed<<setprecision(1)<<money;
    return 0;
}
