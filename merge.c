#include<stdio.h>
#include<stdlib.h>
struct node
{
       int data;
       struct node *next;
}*l1=NULL, *l2=NULL, *l=NULL, *temp,*t;
int i,num;
struct node *create(int n)
{
       for (l=NULL,i=1;i<=n;i++)
       {
           printf("\nEnter Data For Node %d : ",i);
           scanf("%d",&num);
           if (l!=NULL)
           {
              if (t->data > num)
              {
                 printf("\nData Fro Node %d Must Be Greater Than Data For Node %d...\n",i,i-1);
                 i--;
                 continue;
              }
           }
           temp=(struct node *)malloc(sizeof(struct node));
           temp->data=num;
           if (i==1)
              l=t=temp;
           else
           {
              t->next=temp;
              t=temp;
           }
           t->next=NULL;
           return (l);
       }
}
void display(struct node *t)
{
     if (t==NULL)
        printf("\nLinked List Is Empty...\n");
     else
     {
        printf("Start-->");
        for (t->next!=NULL;t=t->next;)
            printf("%d-->",t->data);
        printf("%d-->NULL",t->data);
     }
}
struct node *merge(struct node *l1, struct node *l2)
{
       for (l=NULL;l1!=NULL && l2!=NULL;)
       {
           temp=malloc(sizeof(struct node));
           if (l1->data > l2->data)
           {
              temp->data=l2->data;
              l2=l2->next;
           }
           else
           {
              if (l1->data < l2->data)
              {
                 temp->data=l1->data;
                 l1=l1->next;
              }
              else
              {
              temp->data=l1->data;
              l1=l1->next;
              if (l==NULL)
                 l=t=temp;
              else
              {
                 t->next=temp;
                 t=temp;
              }
              temp->next=malloc(sizeof(struct node));
              temp=temp->next;
              temp->data=l2->data;
              l2=l2->next;
              }
          if (l==NULL)
             l=t=temp;
          else
          {
             t->next=temp;
             t=temp;
          }
          if (l1!=NULL)
             t->next=l1;
          else
             t->next=l2;
          return (l);
          }
      }
}
void main()
{
     int n;
     printf("\nMERGE TWO SORTED LISTS TO CREATE NEW\n");
     printf("\nEnter Size of List 1 : ");
     scanf("%d",&n);
     if (n<=0)
        printf("\nEnter Valid Size...\n");
     else
     {
        l1=create(n);
        display(l1);
     }
     printf("\nEnter Size of List 2 : ");
     scanf("%d",&n);
     if (n<=0)
        printf("\nEnter Valid Size...\n");
     else
     {
        l2=create(n);
        display(l2);
     }
     l=merge(l1,l2);
     printf("\nThe New Merged List Is : ");
     display(l);
}
