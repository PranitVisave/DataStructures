#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int qarray[MAX],i,data;
int front, rear;
void init();
void peek();
void enque();
int deque();
void display();
int isempty();
int isfull();
void init()
{
     front=rear=-1;
}
void enque()
{ 
     printf("\nEnter Element To Insert In Queue : ");
     scanf("%d",&data);
     rear=rear+1;
     qarray[rear]=data;
}
int deque()
{
     printf("\nElement Deleted From Queue Is %d. \n",qarray[++front]);
}
void peek()
{
     printf("\nFront Element Of Queue Id %d.\n",qarray[front+1]);
}
void display()
{
     if (isempty())
         printf("\nThe Queue Is Empty...\n");
     
     else
     {
     printf("\nFRONT -->");
     for (i=front+1;i!=rear;i++)
         printf(" %d::",qarray[i]);
     printf("%d<--REAR\n",qarray[rear]);
     }     
}
int isempty() 
{
     if (front==rear)
        return 1;
    return 0;
}
int isfull()
{
     if (rear==MAX-1)
        return 1;
    return 0;
}       
