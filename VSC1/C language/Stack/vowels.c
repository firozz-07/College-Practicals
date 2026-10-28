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
    push(10);
    push(20);
    push(30);
    display();
}