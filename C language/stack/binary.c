#include<stdio.h>
int main(){
    int num,stack[50],top=-1,rem;
    printf("enter the number");
    scanf("%d",&num);
    while (num>0)
    {
       rem=num%2;
       stack[++top]=rem;
       num=num/2;
    }
    printf("binary number is : ");
    while (top!=-1)
    {
       printf(" %d",stack[top--]);
    }
    
    
}