#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev, *next;
};

struct node *head = NULL;

void insert()
{
    struct node *n = malloc(sizeof(struct node));
    scanf("%d", &n->data);
    n->prev = NULL;
    n->next = head;

    if (head)
        head->prev = n;

    head = n;
}

void delete()
{
    struct node *n = head;

    if (!head)
    {
        puts("Empty");
        return;
    }

    head = head->next;

    if (head)
        head->prev = NULL;

    printf("Deleted: %d", n->data);
    free(n);
}

void display()
{
    struct node *n;

    for (n = head; n; n = n->next)
        printf("%d ", n->data);
}

int main()
{
    int ch;

    do
    {
        printf("\n1 Insert 2 Delete 3 Display 4 Exit: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1: insert(); break;
            case 2: delete(); break;
            case 3: display(); break;
        }
    } while (ch != 4);

    return 0;
}