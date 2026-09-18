#include <stdio.h>
#define size 5

int q[size];
int front = -1, rear = -1;

void insertFront(int x)
{
    if (front == 0)
        printf("Full\n");
    else
    {
        if (front == -1)
            front = rear = 0;
        else
            front--;

        q[front] = x;
    }
}

void insertRear(int x)
{
    if (rear == size - 1)
        printf("Full\n");
    else
    {
        if (front == -1)
            front = rear = 0;
        else
            rear++;

        q[rear] = x;
    }
}

void deleteFront()
{
    if (front == -1)
        printf("Empty\n");
    else
    {
        printf("Deleted: %d\n", q[front]);

        if (front == rear)
            front = rear = -1;
        else
            front++;
    }
}

void deleteRear()
{
    if (front == -1)
        printf("Empty\n");
    else
    {
        printf("Deleted: %d\n", q[rear]);

        if (front == rear)
            front = rear = -1;
        else
            rear--;
    }
}

void display()
{
    if (front == -1)
        printf("Empty\n");
    else
    {
        for (int i = front; i <= rear; i++)
            printf("%d ", q[i]);

        printf("\n");
    }
}

int main()
{
    int ch, x;

    do
    {
        printf("\n1.Insert Front  2.Insert Rear");
        printf("\n3.Delete Front  4.Delete Rear");
        printf("\n5.Display  6.Exit\n");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                scanf("%d", &x);
                insertFront(x);
                break;

            case 2:
                scanf("%d", &x);
                insertRear(x);
                break;

            case 3:
                deleteFront();
                break;

            case 4:
                deleteRear();
                break;

            case 5:
                display();
                break;

            case 6:
                break;

            default:
                printf("Invalid choice\n");
        }
    } while(ch != 6);

    return 0;
}