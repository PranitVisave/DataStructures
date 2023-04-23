#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
        int data;
        struct node *next;
}node;
node *top=NULL,*temp,*newnode;
int n;
void init()
{
     top=NULL;
}
void push(int val)
{
     newnode=malloc(sizeof(node));
     newnode->data=val;
     if (top==NULL)
        newnode->next=NULL;
     else
        newnode->next=top;
     top=newnode;
     printf("\nElement %d Inserted Successfully ",val);
}
int pop()
{
     int t;
     if (top==NULL)
        printf("\nStack Is Empty..\n");
     else
     {
       temp=top;
       t=top->data;
       top=top->next;
       return t;      
     }     
}
void peek()
{
     if (top==NULL)
        printf("\nStack Is Empty...\n");
     else
        printf("\nTop ELement Of Stack Is %d.\n",top->data);
}
void isempty()
{
     if (top==NULL)
        printf("\nSatck Is Empty...\n");
     else
        printf("\nThe Satck Is Not Empty...\n");
}


