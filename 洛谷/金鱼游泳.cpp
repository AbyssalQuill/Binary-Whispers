#include <bits/stdc++.h>
using namespace std;
int main(){
    int starthour,endhour,startmin,endmin,start,end,hour,min;
    scanf("%d%d%d%d",&starthour,&startmin,&endhour,&endmin);
    start=starthour*60+startmin;
    end=endhour*60+endmin;
    hour=(end-start)/60;
    min=(end-start)%60;
    printf("%d %d",hour,min);
    return 0;
}

