#include <stdio.h>
#include <string.h>
int main() {
    double num;
    scanf("%lf",&num);
    char s[50];
    sprintf(s, "%.10g",num);
    char reversed[50]={0};
    int len=strlen(s);
    for (int i=0;i<len;i++) {
        reversed[i]=s[len-1-i];
    }
    printf("%s\n",reversed);
    return 0;
}