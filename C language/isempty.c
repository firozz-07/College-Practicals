#include<stdio.h>
#define size 5
int stack[size];
int top=-1;
void empty(void){
    if(top==-1){
        printf("the stack is empty");
    }
    else{
        printf("not empty");
    }
}
int main(){
    // stack[++top]=10;
    empty();
}