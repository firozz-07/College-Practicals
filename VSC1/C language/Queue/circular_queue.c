#include <stdio.h>
#define max 5
int queue[max];
int front = -1;
int rear = -1;

void enqueue(int x)
{
  if ((rear + 1) % max == front)
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
    rear = (rear + 1) % max;
    queue[rear] = x;
  }
}

void dequeue()
{
  if (front == -1)
  {
    printf("queue is empty\n");
  }
  else if (front == rear)
  {
    front = rear = -1;
  }
  else
  {
    front = (front + 1) % max;
  }
}

void display()
{
  if (front == -1)
  {
    printf("queue is empty\n");
  }
  else
  {
    printf("Queue elements: ");
    if (front <= rear)
    {
      for (int i = front; i <= rear; i++)
      {
        printf(" %d", queue[i]);
      }
    }
    else
    {
      for (int i = front; i < max; i++)
      {
        printf(" %d", queue[i]);
      }
      for (int i = 0; i <= rear; i++)
      {
        printf(" %d", queue[i]);
      }
    }
    printf("\n");
  }
}

void peek()
{
  if (front == -1)
  {
    printf("queue is empty\n");
  }
  else
  {
    printf("Front element (peek): %d\n", queue[front]);
  }
}

int main()
{
  enqueue(10);
  enqueue(20);
  enqueue(30);
  enqueue(40);
  dequeue();
  enqueue(50);
  display();
  enqueue(50);
  return 0;
}
