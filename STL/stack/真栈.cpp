#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<char>stack;
    string s;
    cin>>s;
    for (char c:s){
        if (!stack.empty()&&stack.top()==c) stack.pop();
        else stack.push(c);
    }
    string res;
    while (!stack.empty()){
        res+=stack.top();
        stack.pop();
    }
    reverse(res.begin(),res.end());
    cout<<res<<endl;
    return 0;
}