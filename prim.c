#include<stdio.h>
#define MAX 10
#define mx 999
int graph[MAX][MAX],parent[MAX],key[MAX],mst[MAX],wt,v;
int minkey()
{
    int minimum=mx,min,i;
    for (i=0;i<v;i++)
    {
        if (mst[i]==0 && key[i] < minimum)
        {
           minimum=key[i];
           min=i;
        }
    }
    return min;
}
void prims()
{
     int i,j,u;
     for (i=0;i<v;i++)
     {
         parent[i]=-1;
         key[i]=mx;
         mst[i]=0;
     }
     key[0]=0;
     for (j=0;j<v;j++)
     {
         u=minkey();
         mst[u]=1;
         for (i=0;i<v;i++)
             if (graph[u][i]!=0 && mst[i]==0 && graph[u][i] < key[i])
             {
                parent[i]=u;
                key[i]=graph[u][i];
             }
     }
}
void main()
{
     int e,v1,v2,j,i,cost=0;
     printf("\nEnter Number Of Vertices For Undirected Graph : ");
     scanf("%d",&v);
     for (i=0;i<v;i++)
         for (j=0;j<v;j++)
             graph[i][j]=0;
     printf("\nEnter Number Of Edges For Undirected Graph : ");
     scanf("%d",&e);
     for (i=0;i<e;i++)
     {
         printf("\nEnter Edge %d And Its Weight : ",i+1);
         scanf("%d%d%d",&v1,&v2,&wt);
         graph[v1-1][v2-1]=graph[v2-1][v1-1]=wt;      
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
             printf("%d ",graph[i][j]);
         printf("\n");
     }
     prims(); 
     printf("\n  Edge  Weight\n");
     for (i=1;i<v;i++)
     {
          printf("%d -> %d : %d \n",parent[i]+1,i+1,graph[i][parent[i]]);
          cost=cost+graph[i][parent[i]];
     }
     printf("\nMinimum Cost Of Spanning Tree : %d \n",cost);
}


/*
sy17@pc35:~/DS_SEM_IV_79/Assig_5$ ./a.out

Enter Number Of Vertices For Undirected Graph : 5

Enter Number Of Edges For Undirected Graph : 6

Enter Edge 1 And Its Weight : 1 2 3

Enter Edge 2 And Its Weight : 1 4 2

Enter Edge 3 And Its Weight : 4 2 1

Enter Edge 4 And Its Weight : 2 5 7

Enter Edge 5 And Its Weight : 2 3 6

Enter Edge 6 And Its Weight : 5 3 4

Adjacency Matrix For Graph With 5 Vertices & 6 Edges : 
   1 2 3 4 5
1  0 3 0 2 0 
2  3 0 6 1 7 
3  0 6 0 0 4 
4  2 1 0 0 0 
5  0 7 4 0 0 

  Edge  Weight
4 -> 2 : 1 
2 -> 3 : 6 
1 -> 4 : 2 
3 -> 5 : 4 

Minimum Cost Of Spanning Tree : 13 

*/
