#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int vis[MAX],adj[MAX][MAX]={0},stack[MAX],top,n;
/*void push(int n)
{
     top=top+1;
     stack[top]=n;
}
int pop()
{
    return stack[--top];
}
int isfull()
{
    if (top==-1)
       return 0;
    return 1;
}
int isempty()
{
    if (top==-1)
       return 1;
    return 0;
}
*/
void dfs(int start, int v)
{
     vis[start]=1;
     printf(" %d ",start+1);
     for (i=0;i<v;i++)
     {
         if (adj[start][i] && !visit[i])
            stack[++top]=i;
         if (top>=0)
            dfs
void main()     //undirected
{
     //printf("BFS For Undirected Graph : \n");
     int i,j,v,e,v1,v2,start,c;
     printf("\nEnter Number Of Vertices : ");
     scanf("%d",&v);
     for (i=0;i<v;i++)
         for (j=0;j<v;j++)
             adj[i][j]=0;
     printf("\nEnter Number Of Edges : ");
     scanf("%d",&e);
     for (i=0;i<e;i++)
     {
         printf("\nEnter Edge %d : ",i+1);
         scanf("%d%d",&v1,&v2);
         if ((v1>=1 && v1<=v) && (v2>=1 && v2<=v))
         {
            adj[v1-1][v2-1]=1;
            adj[v2-1][v1-1]=1;
         }
         else
            printf("\nInvalid Vertex...");
     }
     printf("\nAdjacency Matrix For Graph With %d Vertices & %d Edges : \n",v,e);
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
     printf("\nEnter Vertex To Start Traversal : ");
     scanf("%d",&start);
     printf("\nDepth First Search Traversal Of Graph :\n");
     push(start);
     vis[start-1]=1;
     while (!isempty())
     {
           int v;
           v=stack[top];
           //printf(" %d ",v);
           c=pop();
           for (i=0;i<v;i++)
               if (adj[start-1][i]==1 && vis[i]==0)
               {
                  vis[i]=1;
                  push(i+1);
               }
     }
}



/*
printf("\nEnter Vertex To Start Traversal : ");
     scanf("%d",&start);
     printf("\nDepth First Search Traversal Of Graph :\n");
     dfs(start-1,v);
  */
