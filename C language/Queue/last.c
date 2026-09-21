#include<stdio.h>
#define size 5
int q[size];
int front=-1;
int rear=-1;
void enqueue(int x){
  if(rear==size-1) printf("q is full");
  if(rear==-1){
    rear=0;
    q[rear]=x;
  }
  else{
    rear++;
    q[rear]=x;
  }
}
void dequeue(){
  if(front==-1) printf("empty");
  if(front==0){
    front=-1;
    rear=-1;
  }
  else{
    front++;
    printf("doneee");
  }
}
void isfull(){
  if(rear==size-1) printf("q is full");
  else printf("not full");
}
void isempty(){
  if(rear==-1) printf("empty");
  else printf("not empty");
}
void elfront(){
  if(rear==-1) printf("empty");
  else printf("%d",q[front]);
}
void elrear(){
  if(rear==-1) printf("empty");
  else printf("%d",q[rear]);
}
void display(){
    if(rear==-1) printf("empty");
    else{
      for(int i=0;i<=rear;i++){
        printf("%d",q[i]);
      }
    }
}
int main(){
  enqueue(10);
  display();
}