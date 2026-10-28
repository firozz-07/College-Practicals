#include<stdio.h>
#define size 5
int stack[size];
int top=-1;
void push(int x){
    if(top==size-1){
        printf("full");
    }
    else{
        top++;
        stack[top]=x;
    }
}
void pop(){
    if(top==-1){
        printf("empyt");
    }
    else{
        top--;
        printf("deleted");
    }
}
void display(){
        if(top==-1){
        printf("empyt");
    }
    else{
        for(int i=0;i<=top;i++){
            printf("%d ",stack[i]);
        }
    }
}
int main(){
    int close=1;
while(close==1){
    printf("1 to add 2 to pop 3 to dispaly\n");
    int ch;
    int num;
    printf("enter c");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
    printf("enter number");
    scanf("%d",&num);
        push(num);
        break;
    case 2:
    pop();
    break;
    case 3:display();
    break;
    case 4:
    close=0;
    break;
    
    default:
    printf("enter the valid  choice");
        break;
    }
}
}