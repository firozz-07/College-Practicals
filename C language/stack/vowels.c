#include<stdio.h>
char stack[50];
int top=-1;
void push(char ch){
    top++;
    stack[top]=ch;
}
int main(){
    push('a');
    push('f');
    push('i');
    push('r');
    push('o');
    push('q');
    int count=0;
        for(int i=0;i<=top;i++){
            char a=stack[i];
        if(a=='a'||a=='e' ||a=='i' || a== 'o' || a=='u'){
            count++;
        }
    }
    printf("%d",count);
}