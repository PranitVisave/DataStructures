#include<stdio.h>
#include<stdlib.h>
void create(void);
void display(void);
void insert(int);
void dpos(int);
void dval(int);
void reverse(void);
void search(int);
struct dnode
{
       int data;
       struct dnode *next,*pre;
}*startl=NULL,*startr=NULL,*t,*temp;
int i,n;
void create(void)
{   
     for (i=1;i<=n;i++)
     {
         temp=malloc(sizeof(struct dnode *));
         printf("\nEnter Data To Insert In Node %d : ",i);
         scanf("%d",&temp->data);
         if (i==1)
            t=startl=startr=temp;
         else
         {
            t->next=temp;
            temp->pre=t;
            t=t->next;
         }
      }
      startr=temp;
      startl->pre=NULL;
      startr->next=NULL;
}
void display(void)
{
     printf("\nDoubly Linked List From Left To Right : \n");
     printf("Start");
     for (t=startl;t->next!=NULL;t=t->next)
         printf("-->%d",t->data);
     printf("-->%d-->NULL\n",t->data);          
     printf("\nDoubly Linked List From Right To Left : \n");
     printf("Start");
     for (t=startr;t->pre!=NULL;t=t->pre)
         printf("-->%d",t->data);
     printf("-->%d-->NULL\n",t->data);
} 
void insert(int pos)
{
     temp=malloc(sizeof(struct dnode *));  
     printf("\nEnter Data To Insert In Node %d : ",pos);
     scanf("%d",&temp->data);
     if (pos==1)
     {
        temp->next=startl;
        startl->pre=temp;
        startl=temp;
        temp->pre=NULL;
     }
     else 
     {
         for (i=1,t=startl;i<pos-1;t=t->next,i++);
         temp->next=t->next;
         t->next=temp;
         temp->pre=t;
         if (t==startr)
            startr=temp;
         else
            temp->next->pre=temp;
     }
     n++;
}
void dpos(int pos)
{
      if (pos==1)
      {
         if (startr==startl)
            startl=startr=NULL;
         else
         {
            startl=startl->next;
            startl->pre=NULL;
         }
         printf("\nNode Deleted SUccessfully ! \n");
         n--;
         return;
      }
      else
      {
          for (i=1,t=startl;i<pos-1 && t->next!=NULL;t=t->next,i++);
              temp=t->next;
              t->next=temp->next;
              if (temp!=startr)
                 temp->next->pre=t;
              else
             {
                t->next=NULL;
                startr=t;
             }
      }    
      printf("\nNode Deleted Successfully ! \n");              
      n--;    
}
void dval(int val)
{
     for (t=startl,i=1;t!=NULL;i++,t=t->next)
     {
         if (t->data==val)
            break;
         temp=t;
     }
     if (t==NULL)
        printf("\nValue %d Not Found... \n",val);
     else
     {       
        if (t==startl && t==startr)
           startr=startl=NULL;
        else 
        {
           if (t==startl)
           {
              startl=startl->next;
              startl->pre=NULL;
           }
           else if (t==startr)
           {
              temp->next=NULL;
              startr=temp;
           }
           else
           {
              temp->next=t->next;
              t->next->pre=temp;
           }
        }
        n--;
     }         
}

void search(int val)
{
     for (i=1,t=startl;t!=NULL && t->data!=val;i++,t=t->next);
         if (t->data==val)
            printf("\nValue %d Found At Position %d !\n",val,i);
         else
            printf("\nValue %d Not Found !\n",val);
     for (i=1,t=startr;t!=NULL && t->data!=val;i++,t=t->pre);
         if (t->data==val)
            printf("\nValue %d Fount At Position %d !\n",val,i);
}


void reverse(void)
{ 
     struct dnode *temp1;
     temp1=startl;
     startl=startr;
     startr=temp1;
     printf("\nDoubly Linked List From Left To Right : \n");
     printf("\nStart");
     for (temp1=startr;temp1->next!=NULL;temp1=temp1->next);
         printf("-->%d",temp1->data);
     printf("-->%d-->NULL",temp1->data);
     printf("\nDoubly Linked List From Right To Left : \n");
     printf("\nStart");
     for (temp1=startl;temp1->pre=NULL;temp1=temp1->pre);
         printf("-->%d",temp1->data);
     printf("-->%d-->NULL",temp1->data);
}


