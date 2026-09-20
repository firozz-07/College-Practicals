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
void deletebeg(){
  struct node *temp;
  if(head==NULL)printf("empty");
  else{
    temp=head;
    head=temp->next;
    free(temp);
  }
}
void deleteend(){
  struct node *temp;
  struct node *del;
    if(head==NULL)printf("empty");
    if(head->next==NULL) {
      free(head);
    }
    temp = head;

    while (temp->next->next != NULL)
        temp = temp->next;

    del = temp->next;
    temp->next = NULL;
    free(del);
}
void deletepos(){
  int pos, i;
    struct node *temp, *del;

    printf("Enter position: ");
    scanf("%d", &pos);

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (pos == 1) {
        deleteBeg();
        return;
    }

    temp = head;

    for (i = 1; i < pos - 1 && temp->next != NULL; i++)
        temp = temp->next;

    if (temp->next == NULL) {
        printf("Invalid position\n");
        return;
    }

    del = temp->next;
    temp->next = del->next;
    free(del);
}
void display(){
  struct node *temp = head;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}