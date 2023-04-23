#include<stdio.h>
#include<stdlib.h>
void create(void);
void display(void);
void insert(int);
void dpos(int);
void dval(int);
void reverse(void);
void search(int);
struct Node
{
       int data;
       struct Node *next;
}*start=NULL,*t,*temp,*newnode;
int i,n;
void create(void)
{   
     newnode=(struct Node *)malloc(sizeof(struct Node *));       
     printf("\nEnter Data To Insert In Node 1 : ");
     scanf("%d",&newnode->data);
     start=temp=newnode;     
     for (i=2;i<=n;i++)
     {            
         newnode=(struct Node *)malloc(sizeof(struct Node *));
         printf("\nEnter Data To Insert In Node %d : ",i);
         scanf("%d",&newnode->data);
         temp->next=newnode;
         temp=temp->next;
     }
     newnode->next=NULL; 
}
void display(void)
{
     if (start==NULL)
     {
         printf("\n The Linked List is Empty...\n");
         return;
     }
     printf("Start");
     for (t=start;t->next!=NULL;t=t->next)
         printf("-->%d",t->data);
     printf("-->%d-->NULL\n",t->data);          
} 
void insert(int pos)
{
     temp=(struct Node *)malloc(sizeof(struct Node));
     printf("\nEnter Data TO Insert In Node %d : ",pos);
     scanf("%d",&temp->data);
     if (pos==1)
     {
        temp->next=start;
        start=temp;
     }
     else 
     {
         for (t=start,i=1;i<pos-1;i++,t=t->next);
         temp->next=t->next;
         t->next=temp;
     }
     n++;
}
void dpos(int pos)
{
      struct Node *p;
      
      if (pos==1)
      {
          temp=start;
          start=temp->next;
          printf("\n Node Deleted SUccessfully ! \n");
          n--;
          return;
      }
      for (temp=start, i=1; i<pos-1;temp=temp->next,i++);
      p=temp->next;
      temp->next=p->next;
      printf("\n Node Deleted Successfully ! \n");              
      n--;    
}
void dval(int val)
{
     for (t=start;t!=NULL;t=t->next)
     {
         if (t->data==val)
            break;
         temp=t;
     }
     if (t==NULL)
        printf("\n %d Value Not Found... \n",val);   
     else 
     {       
         if (start==t)
            start=start->next;
         else
            if (t->data==val)
               temp->next=t->next;
         n--; 
     }            
}
void reverse(void)
{
     struct Node *pre,*cur;
     pre=NULL;
     cur=temp=start;
     while (temp!=NULL)
     {
            temp=temp->next;
            cur->next=pre;
            pre=cur;
            cur=temp;
     }
     start=pre;
}
void search(int val)
{
     for (i=1,t=start;t!=NULL;i++,t=t->next)
         if (t->data==val)
         {
            printf("\nValue %d Found At Position %d !\n",val,i);
            return;
         }    
     printf("\n %d Value Not Found...",val);
}
