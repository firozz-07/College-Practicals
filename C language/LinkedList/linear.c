#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *head = NULL;
void insertbeg()
{
  struct node *newnode = malloc(sizeof(struct node));
  printf("data");
  scanf("%d", newnode->data);
  newnode->next = NULL;
  head = newnode;
}
void insertend()
{
  struct node *newnode = malloc(sizeof(struct node));
  struct node *temp;
  printf("data");
  if (head == NULL)
  {
    insertbeg();
  }
  else
  {
    temp = head;
    while (temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = newnode;
    printf("data");
    scanf("%d", newnode->data);
    newnode->next = NULL;
  }
}
insertpos()
{
  int pos, i = 1;
  struct node *temp;
  struct node *newnode = malloc(sizeof(struct node));
  printf("enter pos");
  scanf("%d",&pos);
  printf("enter data");
  scanf("%d", &newnode->data);
  if (pos == 1)
    insertbeg();
  else
  {
    for (i = 1; i < pos - 1 && temp != NULL; i++)
    {
      temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
  }
}