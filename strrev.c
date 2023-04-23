#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10
char stack[MAX];
int top=-1;
void push(char);
char pop();
int main()
{
     char str[20];
     unsigned int i;
     printf("\nEnter A String : ");
         scanf("%s",&str);
     for (i=0;i<strlen(str);i++)
         push(str[i]);
     for (i=0;i<strlen(str);i++)
         str[i]=pop();
     printf("\nReversed String Is : ");
     puts(str);
     return 0;
}
void push(char val)
{
     if (top==(MAX-1))
     {
        printf("\nStack Overflow Occured...\n");
        return;
     }
     stack[++top]=val; 
}
char pop()
{
     if (top==-1)
     {
        printf("\nStack Underflow Occured...\n");
        exit(1);
     }
     return stack[top--];
}
