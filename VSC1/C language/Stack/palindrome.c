#include<stdio.h>
char stack[50];
int top=-1;
int main(){
    char str[20],stack[20];
    int i,top=-1,len;
    char ch;
    printf("enter the string ");
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++){
        stack[++top]=str[i];
    }

    for(i=0;i<len;i++){
        ch =stack[top--];
        if(str[i]!=ch){
            printf("not palindrome\n");
        }
    }
    printf("yes");

}