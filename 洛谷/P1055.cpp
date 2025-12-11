#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string digits="";
    for(int i=0;i<s.length();i++) if(s[i]!='-') digits+=s[i];
    int sum=0;
    for(int i=0;i<9;i++) sum+=(digits[i]-'0')*(i+1);
    int checksum=sum%11;
    char checkChar;
    if(checksum==10) checkChar='X';
    else checkChar=checksum+'0';
    if(checkChar==s[s.length()-1]) cout<<"Right"<<endl;
    else{
        s[s.length()-1]=checkChar;
        cout<<s<<endl;
    }
    return 0;
}