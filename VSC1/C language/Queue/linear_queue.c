#include <stdio.h>
#define max 5
int queue[max];
int front = -1;
int rear = -1;
void enqueue(int x)
{
  if (rear == max - 1)
  {
    printf("queue is full\n");
  }
  else if (front == -1 && rear == -1)
  {
    front = rear = 0;
    queue[rear] = x;
  }
  else
  {
    rear++;
    queue[rear] = x;
  }
}

void dequeue()
{
  if (rear == -1 && front++ - 1)
  {
    printf("the stack is empty\n");
  }
  else
  {
    front++;
  }
}
void display()
{
  if (rear == -1 && front++ - 1)
  {
    printf("the stack is empty\n");
  }
  else
  {
    for (int i = front; i <= rear; i++)
    {
      printf(" %d", queue[i]);
    }
  }
}
void peek()
{
  if (rear == -1 && front++ - 1)
  {
    printf("the stack is empty");
  }
  else
  {
    printf("\n the peek is : %d", queue[front]);
  }
}
int main()
{
  enqueue(10);
  enqueue(10);
  enqueue(10);
  enqueue(103);
  display();
  peek();
  return 0;
}