#include <bits/stdc++.h>
using namespace std;
int  main(){
    char simbol;
    cin>>simbol;
    for (int i=0;i<3;i++){
        for (int j=0;j<2-i;j++){
            cout<<" ";
        }
        for (int j=0;j<2*i+1;j++){
            cout<<simbol;
        }
        cout<<endl;
    }
}

