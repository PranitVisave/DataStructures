#include<stdio.h>
#include<stdlib.h>
void create(void);
void display(void);
//void insert(int);
//void dpos(int);
//void dval(int);
//void reverse(void);
//void search(int);
struct dnode
{
       int data;
       struct dnode *next,*pre;
}*startl=NULL,*startr=NULL,*t,*temp;
int i,n;
void create(void)
{   
     printf("\nEnter Number Of Nodes To Insert In Doubly Linked List : ");
     scanf("%d",&n);
     if (n<=0)
        printf("\nEnter Valid Number Of Nodes ! \n");
     else
     {
        for (i=1;i<=n;i++)
        {
            temp=malloc(sizeof(struct dnode *));
            printf("\nEnter Data TO Insert In Node %d : ",i);
            scanf("%d",&temp->data);
            if (i==1)
               t=startl=startr=temp;
            else
            {
              temp=temp->next;
              temp->pre=t;
              t->next=temp;
            }
        }
        startl->pre=NULL;
        startr->next=NULL;
     }
}
/*void display(void)
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
/*void insert(int pos)
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
      temp=start;
      if (pos==1)
      {
          start=temp->next;
          printf("\nNode Deleted SUccessfully ! \n");
          n--;
          return;
      }
      while (i<pos-1)
      {
            temp->next=newnode->next;
            newnode->next=temp;
            i++;
      }    
      p=temp->next;
      temp->next=p->next;
      printf("\nNode Deleted Successfully ! \n");              
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
     if (temp==NULL)
        printf("\nValue Not Found ! \n");   
     else        
         if (start==t)
            start=start->next;
         else
            if (t->data==val)
               temp->next=t->next;
     n--;         
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
     for (i=1,t=start;t!=NULL && t->data!=val;i++,t=t->next);
         if (t->data==val)
            printf("\nValue %d Found At Position %d !\n",val,i);
         else
            printf("\nValue Not Found !\n");
}
*/
