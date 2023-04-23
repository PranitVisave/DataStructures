#include<stdio.h>
#include<stdlib.h>
struct node
{
       int data;
       struct node *next;
}*front,*rear,*temp;
int t,i;
void init()
{
     front=rear=NULL;
}
void enqueue(int val)
{
     struct node *ptr;
     ptr=malloc(sizeof(struct node));
     ptr->data=val;
     ptr->next=NULL;
     if (front==NULL && rear==NULL)
        front=rear=ptr;
     else
     {
        rear->next=ptr;
        rear=ptr;
     }
     printf("\n%d Element Inserted Successfully...\n",ptr->data);
}
int dequeue()
{
    
    temp=front; 
    t=front->data;
    front=front->next;
    if (front==NULL)
       rear=NULL;
    free(temp);
    return (t);
}
void peek()
{
     printf("\nFront ELement Of Queue Is %d.\n",front->data);
}
int isempty()
{
     if (front==NULL)
        return 1;
     return 0;
}
void display()
{
     if (isempty())
        printf("\nThe Queue Is Empty...\n");
     printf("\nThe Queue Is : FRONT-->");
     for (temp=front;temp->next!=rear;temp=temp->next)
         printf("%d::",temp->data);
     printf("%d<--REAR",temp->data);
}
     
