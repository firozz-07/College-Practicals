#include <stdio.h>
#define max 5

static int deque[max];
static int front = -1;
static int rear = -1;

void enqueueFront(int value)
{
  if ((front == 0 && rear == max - 1) || front == rear + 1)
  {
    printf("Deque is full.\n");
  }
  else if (front == -1)
  {
    front = rear = 0;
    deque[front] = value;
  }
  else if (front == 0)
  {
    front = max - 1;
    deque[front] = value;
  }
  else
  {
    front--;
    deque[front] = value;
  }
}

void enqueueRear(int value)
{
  if ((front == 0 && rear == max - 1) || front == rear + 1)
  {
    printf("Deque is full.\n");
  }
  else if (front == -1)
  {
    front = rear = 0;
    deque[rear] = value;
  }
  else if (rear == max - 1)
  {
    rear = 0;
    deque[rear] = value;
  }
  else
  {
    rear++;
    deque[rear] = value;
  }
}

void deleteFront(void)
{
  if (front == -1)
  {
    printf("Deque is empty.\n");
  }
  else if (front == rear)
  {
    front = rear = -1;
  }
  else if (front == max - 1)
  {
    front = 0;
  }
  else
  {
    front++;
  }
}

void deleteRear(void)
{
  if (front == -1)
  {
    printf("Deque is empty.\n");
  }
  else if (front == rear)
  {
    front = rear = -1;
  }
  else if (rear == 0)
  {
    rear = max - 1;
  }
  else
  {
    rear--;
  }
}

void display(void)
{
  int i;

  if (front == -1)
  {
    printf("Deque is empty.\n");
  }
  else
  {
    printf("Deque elements: ");
    i = front;
    while (1)
    {
      printf("%d ", deque[i]);
      if (i == rear)
      {
        break;
      }
      i = (i + 1) % max;
    }
    printf("\n");
  }
}

int main(void)
{
  enqueueFront(10);
  enqueueRear(20);
  display();
  deleteFront();
  display();
  enqueueFront(10);

  enqueueRear(40);
  display();
  return 0;
}