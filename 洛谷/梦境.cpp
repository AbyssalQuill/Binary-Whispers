#include <bits/stdc++.h>
using namespace std;
int main() {
    int M,N;
    int count[10]={0};
    cin>>M>>N;
    for (int num=M;num<=N;num++) {
        int temp=num;
        while (temp>0) {
            count[temp % 10]++;
            temp/=10;
        }
    }
    for (int i=0;i<10;i++) {
        printf("%d ",count[i]);
    }
    return 0;
}