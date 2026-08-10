#include<stdio.h>
#include<string.h>
int main(){
    char post[20];
    int stack[20];
    int top=-1;
    int a,b,result;
    printf("enter the expression");
    scanf("%s",&post);
    for(int i=0;post[i]!='\0';i++){
        if(post[i]>='0' && post[i]<='9'){
            stack[++top]=post[i]-'0';
        }
        else{
            b=stack[top--];
            a=stack[top--];
            switch (post[i])
            {
            case '+':
                result=a+b;
                break;
            case '-':
                result=a-b;
                break;
            case '*':
                result=a*b;
                break;
            case '/':
                result=a/b;
                break;
            }
            stack[++top]=result;
        }
    }
    printf("\n Result=%d",stack[top]);
    return 0;
}