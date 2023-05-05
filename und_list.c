#include<stdio.h>
#include<stdlib.h>
#define MAX 10
struct node
{
       int vr;
       struct node *next;
}*newnode,*temp,*list[MAX];
struct node *adj[MAX]={0};
int v;
void degree(struct node **list,int v)
{
     int i,j;
     printf("\nVertex InDegree OutDegree TotalDegree \n");
     for (i=1;i<=v;i++)
     {
         int in[MAX]={0},out[MAX]={0};
         temp=list[i];
         while (temp)
         {
               out[i]++;
               temp=temp->next;
         }
         for (j=1;j<=v;j++)
         {
             temp=list[j];
             while (temp)
             { 
                   if (temp->vr==i)
                      in[i]++;
                   temp=temp->next;
             }
         }
         printf("    %d        %d       %d        %d      ",i,in[i],out[i],in[i]+out[i]);
         printf("\n");         
     }
}
void display()
{
     int i,cnt[MAX]={0};
     for (i=1;i<=v;i++)
     {
         printf("%d : --> ",i);
         temp=list[i];
         while (temp!=NULL)
         {
               printf("%d --> ",temp->vr);
               temp=temp->next;
               cnt[i]++;
         }
     printf(" NULL :: Total : %d \n",cnt[i]);
     }
}
void main()
{
     int i,j,e,v1,v2,start;
     printf("\nEnter Number Of Vertices Directed Graph : ");
     scanf("%d",&v);
     printf("\nEnter Number Of Edges For Directed Graph : ");
     scanf("%d",&e);
     for (i=0;i<e;i++)
     {
         printf("\nEnter Edge %d : ",i+1);
         scanf("%d%d",&v1,&v2);
         newnode=malloc(sizeof(struct node));
         newnode->vr=v2;
         newnode->next=NULL;
         if (list[v1]==NULL)
            list[v1]=temp=newnode;
         else
         {
            for (temp=list[v1];temp->next!=NULL;temp=temp->next);
                temp->next=newnode;
         }
     }
     printf("\nAdjacency List For Directed Graph : \n");
     display();
     degree(list,v);
}


/*
void addedge(int v1, int v2)
{   
     newnode=malloc(sizeof(struct node));
     newnode->vr=v2;
     newnode->next=NULL;
     if (list[v1]==NULL)
        list[v1]=temp=newnode;
     else
     {
        for (temp=list[v1];temp->next!=NULL;temp=temp->next);
            temp->next=newnode;
     }
}
*/

   /*  printf("\nAdjacency Matrix For Graph With %d Vertices & %d Edges : \n",v,e);
     printf("  ");
     for (i=1;i<=v;i++)
         printf(" %d",i);
     printf("\n");
     for (i=0;i<v;i++)
     {
         printf("%d  ",i+1);
         for (j=0;j<v;j++)
             printf("%d ",adj[i][j]);
         printf("\n");
     }
     for (i=0;i<v;i++)
         vis[i]=0; 
     
     printf("\nEnter Vertex To Start Depth First Search Traversal : ");
     scanf("%d",&start);
     printf("\nDepth First Search Traversal Of Directed Graph :\n");
     dfs(start-1,v);
     */
     
     
     
     /*
            //  newnode=malloc(sizeof(struct node));
       //  newnode->vr=v2;
       //  newnode->next=NULL;
       //  if (list[i]==NULL)
       //     list[i]=temp=newnode;
       //  else
       //  {
       //      for (temp=list[i];temp->next!=NULL;temp=temp->next);
       //          temp->next=newnode;
       //  }
        // addedge(v1,v2);
        
        */
