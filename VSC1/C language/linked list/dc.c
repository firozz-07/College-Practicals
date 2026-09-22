#include<stdio.h>
#include<stdlib.h>
struct node {
  int data;
  struct node *next,*prev;
};
struct node *head;
struct node *tail;
void insbeg(){
  struct node *newnode =(struct node*)malloc(sizeof(struct node));
  printf("enter data");
  scanf("%d",&newnode->data);
  newnode->next=head;
  newnode->prev=tail;
  head->prev=newnode;
  head=newnode;
}
void inserpos(){
  struct node *temp;
  int pos;
  int i=1;
  if(head==NULL){
    insbeg();
  }
  else{
    temp=head;
    printf("pos");
    scanf("%d",&pos);
    while(i<pos-1){
      temp=temp->next;
      i++;
    }
  
  struct node *newnode=malloc(sizeof(struct node));
  printf("data");
  scanf("%d",&newnode->data);
  newnode->next=temp->next;
  newnode->prev=temp;
  temp->next=newnode;
  temp->next->prev = newnode;
  }

}
void insertend(){
    struct node *newnode=malloc(sizeof(struct node));
    struct node *tail;
      printf("data");
  scanf("%d",&newnode->data);
  newnode->prev=tail;
  newnode->next=tail->next;
  tail=newnode;

}