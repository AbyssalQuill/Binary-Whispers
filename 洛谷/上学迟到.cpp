#include <stdio.h>
int main() {
    int s,v,t,hour,min,arrive,start;
    scanf("%d%d",&s,&v);
    t=(s+v-1)/v+10;
    arrive=480;
    start=arrive-t;
    if (start<0) start+=24*60;
    hour=start/60;
    min=start%60;
    printf("%02d:%02d",hour,min);
    return 0;
}