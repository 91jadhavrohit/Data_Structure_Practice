//10/02/2020
#include<stdio.h>
#include<stdlib.h>
struct Node
{
   int data;
    struct Node * next; //pointer to next node

};

struct Node * create(struct Node *head,int data)
{
  struct Node * newnode; //declare newnode
  newnode=NULL; //set newnode to NULL
  newnode = (struct Node *)malloc(sizeof(struct Node)); //allocate memory to newnode
  newnode->data=data;
  newnode->next=NULL;
  if(head==NULL)
  head=newnode;
  else
 {
  newnode->next=head;
  head=newnode;
 }

return head;  
  
}
void print(struct Node * head)
{
  struct Node * temp=NULL;
  temp=head;
  while(temp->next!=NULL)
  {
    printf("%d\n",temp->data);
    temp=temp->next;
  }
printf("%d\n",temp->data);
}
int main()
{
   struct Node * head =NULL;
 head = create(head,4);
head = create(head,3);
head = create(head,2);
head = create(head,1);
   print(head);

  
  return 0;
}
