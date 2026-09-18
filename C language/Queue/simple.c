#include<stdio.h>
#define size 5
int q[size];
int front=-1,rear=-1;
void enqueue(int x){
  if(rear==size-1){
    printf("full\n");
  }
  else{
    if(front==-1) {front=0;}
    rear++;
    q[rear]=x;
  }
}
void dequeue(){
  if(front==-1 || front>rear) printf("empty\n");
  else{
    front++;
    if(front>rear){
      front=-1;
      rear=-1;
    }
  }
}
void display(){
  if(front==-1) printf("empty\n");
  else{
    for (int i=front;i<=rear;i++){
      printf(" %d",q[i]);
    }
    printf("\n");
  }
}
int main(){
  enqueue(10);
  enqueue(20);
  dequeue();
  display();
}