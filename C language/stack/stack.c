#include<stdio.h>
#define size 5
int stack[size];
int top=-1;
void insert(){
  int q;
  int e;
  if(top==size-1) printf("stack is full");
  else{
    printf(" how many number you want to add");
    scanf("%d",&q);
    for(int i=0;i<q;i++){
      printf("\n enter element");
      scanf("%d",&e);
      top++;
      stack[top]=e;
      printf("\nelement added");
    }
  }
}
void display(){
  if (top==-1) printf("empty ");
  else{
    for(int i=0;i<=top;i++){
      printf(" %d",stack[i]);
    }
  }
  
}
void isEmpty(){
  if(top==-1) printf("the stack is empty");
  else printf("the stack not  empty");
}
void isFull(){
  if(top==size-1) printf("the stack is full");
  else printf("the stack not  full");
}
void delete(){
   if(top==-1) printf("the stack is empty");
   else {
    printf("dleted");
    top--;}
}
void peek(){
   if(top==-1) printf("the stack is empty");
   else printf("%d",stack[top]);
}

int main(){
  insert();
  // insert();
  // isEmpty();
  // isFull();
  // peek();
  delete();
  display();
}