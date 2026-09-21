#include<stdio.h>
#define size 5
int stack[size];
int top=-1;
void push(int x){
  if(top==size-1) printf("the stack is full\n");
  else{
   top++;
   stack[top]=x; 
  }
}
void pop(){
  if(top==-1) printf("the stack is empty\n");
  else{
    printf("\ndeleted  %d",stack[top]);
    top--;
  }
}
void isfull(){
  if(top==size-1) printf("the stack is full\n");
  else printf("the stack is not full\n");
}
void isempty(){
  if(top==-1) printf("the stack is empty\n");
  else printf("the stack is not empty\n");
}
void peek(){
  if(top==-1) printf("the stack is empty\n");
  else printf("%d",stack[top]);
}
void display(){
  if(top==-1) printf("the stack is empty\n");
else{
  for(int i=0;i<=top;i++){
    printf(" %d",stack[i]);
  }
}
}
int main(){
  push(10);
  push(10);
  push(10);
  pop();

  display();
}