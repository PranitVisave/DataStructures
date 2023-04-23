#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
        int co,ex;
        struct node *next;
}poly;
poly *newnode, *temp;
void create(poly *head)
{
     temp=head;
     int i,n;
     printf("\nEnter Number Of Terms To Insert In Polynomial : ");
     scanf("%d",&n);
     printf("\nEnter Terms In Descending Order of Their Powers : \n");
     for (i=1;i<=n;i++)
     {
         newnode=malloc(sizeof(struct node));
         newnode->next=NULL;
         printf("\nEnter Coefficient Of Term %d : ",i);
         scanf("%d",&newnode->co);
         printf("\nEnter Exponent For %d : ",newnode->co);
         scanf("%d",&newnode->ex);
         if (i!=1 && newnode->ex >= temp->ex)
         {
            printf("\nTerms Must Be In Descending Order Of Their Powers...\n");
            i--;
         }
         temp->next=newnode;
         temp=newnode;
     }
}
void display(poly *head)
{
     poly *temp=malloc(sizeof(struct node));
     for (temp=head->next;temp!=NULL;temp=temp->next)
     {
         printf("(%dx^%d)",temp->co,temp->ex);
         if (temp->next!=NULL)
            printf(" + ");
         else
            printf("\n");
     }
}
void add(poly *p1, poly *p2, poly *p3)
{
     poly *t1, *t2, *t3;
     t1=p1->next;
     t2=p2->next;
     t3=p3;
     while (t1!=NULL && t2!=NULL)
     {
           newnode=malloc(sizeof(struct node));
           if (t1->ex > t2->ex)
           {
               newnode->ex=t1->ex;
               newnode->co=t1->co;
               t1=t1->next;
           }
           else 
           {
              if (t1->ex < t2->ex)
              {
                 newnode->ex=t2->ex;
                 newnode->co=t2->co;
                 t2=t2->next;
              }
              else
              {
                 newnode->ex=t1->ex;
                 newnode->co=t1->co + t2->co;
                 t1=t1->next;
                 t2=t2->next;
              }
           }
           t3->next=newnode;
           t3=newnode;
           while (t1)
           {
                 newnode=malloc(sizeof(struct node));
                 newnode->next=NULL;
                 newnode->ex=t1->ex;
                 newnode->co=t1->co;
                 t3->next=newnode;
                 t1=t1->next;
           }
           while (t2)
           {
                 newnode=malloc(sizeof(struct node));
                 newnode->next=NULL;
                 newnode->ex=t2->ex;
                 newnode->co=t2->co;
                 t3->next=newnode;
                 t2=t2->next;
           }
       }
}
void main()
{
     poly *p1, *p2, *p3;
     p1=malloc(sizeof(poly));
     p1->next=NULL;
     p2=malloc(sizeof(poly));
     p2->next=NULL;
     p3=malloc(sizeof(poly));
     p3->next=NULL;
     create(p1);
     printf("\nFirst Polynomial is : ");
     display(p1);
     create(p2);
     printf("\nSecond Polynomial is : ");
     display(p2);
     add(p1, p2, p3);
     printf("\nADDITION OF TWO POLYNOMIALS IS : ");
     display(p3);
}
               
               
               
               
               
               
               
               
               
               
               
               
               
               
               
               
               
               
     
