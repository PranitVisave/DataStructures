#include<stdio.h>
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
void main()
{
     int i,j,v,e,v1,v2,start;
     printf("\nEnter Number Of Vertices Directed Graph : ");
     scanf("%d",&v);
     for (i=0;i<v;i++)
         for (j=0;j<v;j++)
             adj[i][j]=0;
     printf("\nEnter Number Of Edges Directed Graph : ");
     scanf("%d",&e);
     for (i=0;i<e;i++)
     {
         printf("\nEnter Edge %d : ",i+1);
         scanf("%d%d",&v1,&v2);
         if ((v1>=1 && v1<=v) && (v2>=1 && v2<=v))
         {
            adj[v1-1][v2-1]=1;
        //    adj[v2-1][v1-1]=1;
         }
         else
            printf("\nInvalid Vertex...");
     }
     printf("\nAdjacency Matrix For Graph With %d Vertices & %d Edges : \n",v,e);
     printf("  ");
     for (i=1;i<=v;i++)
         printf(" %d",i);
        // printf("--");
     printf("\n");
     for (i=0;i<v;i++)
     {
         printf("%d  ",i+1);
         for (j=0;j<v;j++)
         //    printf("%d ",j+1);
             printf("%d ",adj[i][j]);
         printf("\n");
     }
     printf("\nEnter Vertex To Start Breadth First Search Traversal : ");
     scanf("%d",&start);
     printf("\nBreadth First Search Traversal Of Directed Graph :\n");
     bfs(start-1,v);
}

/*
OUTPUT:
sy17@pc35:~/DS_SEM_IV_79/Assig_3$ ./a.out

Enter Number Of Vertices Directed Graph : 6

Enter Number Of Edges Directed Graph : 6

Enter Edge 1 : 1 2

Enter Edge 2 : 1 3

Enter Edge 3 : 2 4

Enter Edge 4 : 4 3

Enter Edge 5 : 4 5

Enter Edge 6 : 4 6

Adjacency Matrix For Graph With 6 Vertices & 6 Edges : 
   1 2 3 4 5 6
1  0 1 1 0 0 0 
2  0 0 0 1 0 0 
3  0 0 0 0 0 0 
4  0 0 1 0 1 1 
5  0 0 0 0 0 0 
6  0 0 0 0 0 0 

Enter Vertex To Start Breadth First Search Traversal : 1

Breadth First Search Traversal Of Directed Graph :
 1  2  3  4  5  6
 
 */

