#include <bits/stdc++.h>
using namespace std;
int main(){
    int num[3];
    cin>>num[0]>>num[1]>>num[2];
    sort(num,num+3);
    string letter;
    cin>>letter;
    for (char c:letter){
        if(c=='A')
        cout<<num[0]<<" ";
        else if(c=='B')
        cout<<num[1]<<" ";
        else
        cout<<num[2]<<" ";
    }
    return 0;
}