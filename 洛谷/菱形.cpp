#include <bits/stdc++.h>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<(i<2?2-i:i-2);j++){
            cout<<" ";
        }
        for(int j=0;j<(i<2?2*i+1:9-2*i);j++){
        cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}