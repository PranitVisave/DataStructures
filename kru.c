#include<stdio.h>
#define MAX 10
#define mx 999
int graph[MAX][MAX],parent[MAX],n,wt;
int vrt,i,j,u,v,a,b,min,total=0;
int find(int i)
{
    while (parent[i]>0)
          i=parent[i];
    return i;
}
void kruskal()
{
     int k;
     printf("  Edge   Weight\n");
     for (k=1;k<v;k++)
     {
         min=mx;
         for (i=0;i<v;i++)
         {
              for (j=0;j<v;j++)
                  if (graph[i][j] < min)
                  {
                     min=graph[i][j];
                     u=a=i;
                     v=b=j;
                  }
              u=find(a);
              v=find(b);
              if (u!=v)
              {
                 parent[j]=i;
                 printf("%d->%d : %d",a+1,b+1,min);
                 total=total+min;
              }
              graph[i][j]=graph[j][i]=mx;
        }
    }
    printf("\nTotal Cost Of Spanning Tree : %d \n",total);  
}
void main()
{
     int v1,v2,k=0;
     printf("\nEnter Number Of Vertices For Undirected Graph : ");
     scanf("%d",&v);
     for (i=0;i<v;i++)
     {
         for (j=0;j<v;j++)
             if (graph[i][j]==0)
                graph[i][j]=mx;
         parent[i]=-1;
     }    
     while (1)
     {
         printf("\nEnter Edge %d : ",k+1);
         scanf("%d%d",&v1,&v2);
         if (v1==0 && v2==0)
            break;
         else
         { 
            printf("\nEnter Weight Of Edge %d : ",k+1);
            scanf("%d",&wt);
            graph[v1-1][v2-1]=graph[v2-1][v1-1]=wt;
            k++;
         }
     }
   /*  printf("\n Adjacency Matrix For Graph With %d Vertices & %d Edges : \n",v,k);
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
    */
     kruskal();
     printf("  ");
     for (i=1;i<=v;i++)
         printf(" %4d",i);
     printf("\n");
     for (i=0;i<v;i++)
     {
         printf("%4d ",i+1);
         for (j=0;j<v;j++)
             printf("%4d ",graph[i][j]);
         printf("\n");
     }
}

/*
int find(int i)
{
    while (parent[i]>0)
          i=parent[i];
    return i;
}
void kruskal()
{
     int k;
     printf("\nEdge Of Minimum Cost Spanning Tree : \n");
     printf("\nEdge  Weight\n");
     for (k=1;k<vrt;k++)
     {
         min=mx;
         for (i=0;i<n;i++)
         {
             for (j=0;j<n;j++)
                 if (graph[i][j] < min)
                 {
                     min=graph[i][j];
                     a=u=j;
                     b=v=j;
                 }
         }
         u=find(a);
         v=find(b);
         if (u!=v)
         {
            parent[j]=i;
            printf("%d -> %d : %d\n",a+1,b+1,min);
            total=total+min;
         }
         //graph[a][b]=graph[b][a]=mx;
      }
      printf("\nMinimum Cost Of Spanning Tree : %d \n",total);
}

*/
