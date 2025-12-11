#include <bits/stdc++.h>
using namespace std;
    string s;
    string res="";
int main() {
    cin>>s;
    for (char c:s){
        if (!res.empty()&&res.back()==c) res.pop_back();
        else res.push_back(c);
    }
    cout<<res<<endl;
    return 0;
}