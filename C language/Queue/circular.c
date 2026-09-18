#include<stdio.h>
#define size 5
int q[size];
int front=-1,rear=-1;
void enqueue(int x){
  if((rear + 1) % size==front) {printf("full");}
  else{
    if(front==-1) front=0;
    rear = (rear + 1) % size;
    q[rear]=x;
  }
}
void dequeue(){
  if(front==-1)printf("empty\n");
  else{
    if(front==rear) front=rear=-1;
    else{
      front=(front+1)%size;
    }
  }
}
void display(){
  if(front==-1) printf("empty\n");
  else{
   int i = front;
        do
        {
            printf("%d ", q[i]);
            i = (i + 1) % size;
        } while (i != (rear + 1) % size);

        printf("\n");
  }
}
int main(){
  enqueue(10);
  enqueue(20);
  dequeue();
  enqueue(30);
  enqueue(30);
  enqueue(30);
  enqueue(30);
  display();
}