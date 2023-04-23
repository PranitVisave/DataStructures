#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX],i,j,op=1,top,n;

void init()
{
     top=-1;
}
void push()
{
     int val;
     if (top==MAX-1)
        printf("\nStack Overflow Occured...\n");
     else
     {
        printf("\nEnter Value To Push Onto Stack : ");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
     }
}
void pop()
{
     printf("\nThe Popped Element Is %d ",stack[top]);
     top=top-1;
}
void peek()
{
     printf("\nTop Element Of Stack Is %d. \n",stack[top]);
}
void isempty()
{
     if (top==-1)
        printf("\nThe Stack Is Empty...");
     else
     
        printf("\nThe Stack Is Not Empty...");
}
void isfull()
{
     if (top==-1)
        printf("\nThe Stack Is Empty...");
     else
     {
        if (top==MAX)
           printf("\nThe Satck Is Full...\n");
        else
           printf("\nThe satck Is Not Full...\n");
     }
}
