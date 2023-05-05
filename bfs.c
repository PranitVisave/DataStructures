#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int vis[MAX], queue[MAX],front=-1,rear=-1;
int adj[MAX][MAX]={0};
void bfs(int start, int v)
{
     int i,j;
     vis[start]=1;
     queue[++rear]=start;
     while (front!=rear)
     {
           start=queue[++front];
           printf(" %d ",start+1);
           for (i=0;i<v;i++)
               if (adj[start][i]==1 && vis[i]==0)
               {
                   vis[i]=1;
                   queue[++rear]=i;
               }
     }
}     
void main()     //undirected
{
     //printf("BFS For Undirected Graph : \n");
     int i,j,v,e,v1,v2,start;
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
     printf("\nBreadth First Search Traversal Of Graph :\n");
     bfs(start-1,v);
}
