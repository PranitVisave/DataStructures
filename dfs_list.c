#include<stdio.h>
#include<stdlib.h>
#define MAX 10
struct node
{
       int vr;
       struct node *next;
}*newnode,*temp,*list[MAX];
struct node *adj[MAX]={0},*t;
int vis[MAX],vis[MAX]={0},stack[MAX],top=-1;
int v;
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
void dfs(int vrt)
{
     int v,start;
     vis[vrt]=1;
     //printf(" %d ",vrt);
     stack[++top]=vrt;
     while (top!=-1)
     {
           start=stack[top--];
           printf(" %d ",start);
           t=list[start];
           while (t!=NULL)
           {
                 v=t->vr;
                 if (!vis[v])
                 {
                    vis[v]=1;
                    stack[++top]=v;
                 }
                 t=t->next;
           }
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
     //degree(list,v);
     printf("\nEnter Vertex To Start DFS Traversal : ");
     scanf("%d",&start);
     printf("\nDepth First Search Traversal For Graph : \n");
     dfs(start);
}

/*
OUTPUT:

sy17@pc35:~/DS_SEM_IV_79/Assig_4$ ./a.out

Enter Number Of Vertices Directed Graph : 6 

Enter Number Of Edges For Directed Graph : 8

Enter Edge 1 : 1 2

Enter Edge 2 : 1 4

Enter Edge 3 : 4 2

Enter Edge 4 : 2 5

Enter Edge 5 : 5 4

Enter Edge 6 : 3 5

Enter Edge 7 : 3 6

Enter Edge 8 : 6 6

Adjacency List For Directed Graph : 
1 : --> 2 --> 4 -->  NULL :: Total : 2 
2 : --> 5 -->  NULL :: Total : 1 
3 : --> 5 --> 6 -->  NULL :: Total : 2 
4 : --> 2 -->  NULL :: Total : 1 
5 : --> 4 -->  NULL :: Total : 1 
6 : --> 6 -->  NULL :: Total : 1 

Enter Vertex To Start DFS Traversal : 3

Depth First Search Traversal For Graph : 
 3  6  5  4  2 
 
=================X================


sy17@pc35:~/DS_SEM_IV_79/Assig_4$ ./a.out

Enter Number Of Vertices Directed Graph : 6 8

Enter Number Of Edges For Directed Graph : 
Enter Edge 1 : 1 2

Enter Edge 2 : 1 4

Enter Edge 3 : 4 2

Enter Edge 4 : 2 5

Enter Edge 5 : 5 4

Enter Edge 6 : 3 5

Enter Edge 7 : 3 6

Enter Edge 8 : 6 6

Adjacency List For Directed Graph : 
1 : --> 2 --> 4 -->  NULL :: Total : 2 
2 : --> 5 -->  NULL :: Total : 1 
3 : --> 5 --> 6 -->  NULL :: Total : 2 
4 : --> 2 -->  NULL :: Total : 1 
5 : --> 4 -->  NULL :: Total : 1 
6 : --> 6 -->  NULL :: Total : 1 

Enter Vertex To Start DFS Traversal : 1

Depth First Search Traversal For Graph : 
 1  4  2  5 
*/
