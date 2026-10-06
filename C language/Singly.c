#include<stdio.h>
struct node {
  int data;
  struct node *next;
};
struct node *head,tail;
void insbeg(){
  struct node *newnode=malloc(sizeof(struct node));

  printf("data");
  scanf("%d",&newnode->data);
  if(head==NULL){head=newnode;}
  else{
    newnode->next=head;
    head=newnode;
}
}
void insend(){
  if(head==NULL) insbeg();
  else{
    struct node *temp;
    struct node *newnode=malloc(sizeof(struct node));
    temp=head;
    while(temp->next!=NULL){
      temp=temp->next;
    }
    temp->next=newnode;
    printf("data");
    scanf("%d",&newnode->data);
    newnode->next=NULL;

  }
}
void delbeg(){
  struct node *temp=head;
  head=temp->next;
  free(temp);
}
void delend(){
  struct node *temp=head;
  while (temp->next!=NULL)
  {
    temp=temp->next;
  }
  
  
}