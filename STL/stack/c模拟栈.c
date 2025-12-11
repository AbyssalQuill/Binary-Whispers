#include <stdio.h>
#include <string.h>
    char s[100010];
    char res[100010]={0};
    int top=-1;
int main(){
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++){
        if(top!=-1&&res[top]==s[i]) top--;
        else res[++top]=s[i];
    }
    res[top+1]='\0';
    printf("%s",res);
    return 0;
}