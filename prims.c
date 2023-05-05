#include<stdio.h>
#define MAX 10
#define INF 999
int vis[MAX],dis[MAX],parent[MAX],i,j,v,u,cost=0,wt;
int adj[MAX][MAX];
int mindistance()
{    
    int min,minindex;
    min=INF;
    minindex=0;
    for (i=0;i<v;i++)
    {
        if (!vis[i] && dis[i] < min)
        {
           min=dis[i]; 
           minindex=i;
        }
    }
    return minindex;  //index
}
void prims()
{
     for (i=0;i<v;i++)
     {
         vis[i]=0;
         dis[i]=INF;
         parent[i]=-1;
     }
     dis[0]=0;
    // parent[0]=0;   
     for (i=0;i<v-1;i++)
     {
         u=mindistance();
         vis[u]=1;
         for (j=0;j<v;j++)
             if (adj[u][j]!=0 && vis[j]==0 && adj[u][j] < dis[j])
             {
                parent[j]=u;
                dis[j]=adj[u][j];
             }
     }
}
void main()
{
     int e,v1,v2;
     printf("\nEnter Number Of Vertices For Undirected Graph : ");
     scanf("%d",&v);
     for (i=0;i<v;i++)
         for (j=0;j<v;j++)
             adj[i][j]=0;
     printf("\nEnter Number Of Edges For Undirected Graph : ");
     scanf("%d",&e);
     for (i=0;i<e;i++)
     {
         printf("\nEnter Edge %d And Its Weight : ",i+1);
         scanf("%d%d%d",&v1,&v2,&wt);
         adj[v1-1][v2-1]=adj[v2-1][v1-1]=wt;
         //  graph[i][j]=graph[j][i]=dis[i];      
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
     prims(); 
     printf("\n  Edge  Weight\n");
     for (i=1;i<v;i++)
     {
          printf("%d -> %d : %d \n",parent[i]+1,i+1,adj[parent[i]][i]);
          cost=cost+adj[parent[i]][i];
     }
     printf("\nMinimum Cost Of Spanning Tree : %d \n",cost);
}



/*
//     printf("\nEnter Start Vertex For Prim's minimum Spanning Tree : ");
//     scanf("%d",&start);
   //  for (i=0;i<v;i++)
   //      for (j=0;j<v;j++)
   //          graph[i][j]=graph[j][i]=dis[i];
             //graph[i][j]=adj[i][j];
             
             
             */

