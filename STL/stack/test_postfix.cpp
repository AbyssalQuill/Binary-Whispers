#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int stack[105]={0};
int top=-1;

void push(int x){
    if(top>=103) return;
    stack[++top]=x;
}

int pop(){
    if(top==-1) return 0;
    return stack[top--];
}

int isOperator(char *token){
    if(token[0]=='+'||token[0]=='-'||token[0]=='*'||token[0]=='/') return 1;
    return 0;
}

int calculate(char **tokens,int tokensSize){
    for(int i=0;i<tokensSize;i++){
        if(isOperator(tokens[i])){
            int a=pop();
            int b=pop();
            switch(tokens[i][0]){
                case '+':
                    push(b+a);
                    break;
                case '-':
                    push(b-a);
                    break;
                case '*':
                    push(b*a);
                    break;
                case '/':
                    push(b/a);
                    break;
            }
        }
        else{
            push(atoi(tokens[i]));
        }
    }
    return pop();
}

int main(){
    // 测试用例: ["2","1","+","3","*"]
    // 对应表达式: ((2 + 1) * 3) = 9
    char *tokens[] = {"2", "1", "+", "3", "*"};
    int tokensSize = 5;
    
    int result = calculate(tokens, tokensSize);
    printf("表达式 [\"2\",\"1\",\"+\",\"3\",\"*\"] 的计算结果是: %d\n", result);
    
    return 0;
}