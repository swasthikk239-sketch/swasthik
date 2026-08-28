#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node*next;
};
 
 int main()
 {
 struct node*head,*x,*y,*z;
 head=(struct node*)malloc(sizeof(struct node));
 x=(struct node*)malloc(sizeof(struct node));
 y=(struct node*)malloc(sizeof(struct node));
 z=(struct node*)malloc(sizeof(struct node));
 head->data=10;
 head->next=x;
 
  x->data=11;
  x->next=y;
 
  y->data=12;
  y->next=z;
 
  z->data=13;
  z->next=NULL;
  
  struct node*temp=head;
  while(temp!=NULL)
  {
  printf("%d->",temp->data);
  temp=temp->next;
  }
  printf("NULL");
  return 0;
  }
