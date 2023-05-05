#include<stdio.h>
#define MAX 999
#define M 10
int g[M][M],p[M];
int vrt,i,j,k,a,b,u,v,edge,min,total=0;
int find(int i)
{
    while (p[i]>0)
          i=p[i];
    return i;
}
void kruskals()
{
     printf("\nEdge Of Mst : \n");
     printf("\nEdge   Weight\n");
     for (edge=1;edge<vrt;edge++)
     {
         min=MAX;
         for (i=0;i<vrt;i++)
         {
             for (j=0;j<vrt;j++)
                 if (g[i][j]<min)
                 {
                    min=g[i][j];
                    a=u=i;
                    b=v=j;
                 }
         }
         u=find(a);
         v=find(b);
         if (u!=v)
         {
            p[j]=i;
            printf("%d -> %d : %d\n",a+1,b+1,min);
            total=total+min;
         }
         g[a][b]=g[b][a]=MAX;
      }
      printf("\nMinimum Cost Of Spanning Tree : %d \n",total);
}
void main()
{
     int e,v1,v2,wt;
     printf("\nEnter Number Of Vertices For Undirected Graph : ");
     scanf("%d",&vrt);
     for (i=0;i<vrt;i++)
         for (j=0;j<vrt;j++)
             if (i==j)
                g[i][j]=0;
             else
                g[i][j]=MAX;
     printf("\nEnter Number Of Edges For Undirected Graph : ");
     scanf("%d",&e);
     for (i=0;i<e;i++)
     {
         printf("\nEnter Edge %d And Its Weight : ",i+1);
         scanf("%d%d%d",&u,&v,&wt);
         g[u-1][v-1]=g[v-1][u-1]=wt;
         //key[i]=wt;      
     }
     for (i=0;i<vrt;i++)
         for (j=0;j<vrt;j++)
             if (g[i][j]==0 && i!=j)
                g[i][j]=g[j][i]=MAX;
     printf("\nAdjacency Matrix For Graph With %d Vertices & %d Edges : \n",v,e);
     printf("  ");
     for (i=1;i<=vrt;i++)
         printf("%d  ",i);
     printf("\n");
     for (i=0;i<vrt;i++)
     {
         printf("%d  ",i+1);
         for (j=0;j<vrt;j++)
             printf("%d ",g[i][j]);
         printf("\n");
     }
     
     kruskals(); 
}


/*
OUTPUT:-
sy17@pc35:~/DS_SEM_IV_79/Assig_5$ ./a.out

Enter Number Of Vertices For Undirected Graph : 5

Enter Number Of Edges For Undirected Graph : 6

Enter Edge 1 And Its Weight : 1 3 4

Enter Edge 2 And Its Weight : 2 1 2

Enter Edge 3 And Its Weight : 4 1 7

Enter Edge 4 And Its Weight : 5 4 3

Enter Edge 5 And Its Weight : 2 3 8

Enter Edge 6 And Its Weight : 4 3 1

Adjacency Matrix For Graph With 3 Vertices & 6 Edges : 
   1  2  3  4  5 
1  999 2 4 7 999 
2  2 999 8 999 999 
3  4 8 999 1 999 
4  7 999 1 999 3 
5  999 999 999 3 999 

Edge Of Mst : 

Edge   Weight
3 -> 4 : 1
1 -> 2 : 2
4 -> 5 : 3
1 -> 3 : 4

Minimum Cost Of Spanning Tree : 10 

*/






































/*



#include<stdio.h>
#define MAX 100
#define mx 999
int parent[MAX],i,j,v,u,w,total=0,min,e,wt=0;
int adj[MAX][MAX],n,m,a,b;
int find(int x)
{
    while (parent[x]>0)
          x=parent[x];
    return x;
}
/*void uni(int i,int j)
{
     parent[j]=i;
}*/

/*
void kruskals()
{
     printf("\nEdges Of Minimum Spanning Tree : \n");
     printf(" Edge  Weight\n");
     for (e=1;e<n;)
     {
         min=mx;
         for (i=0;i<n;i++)
         {
             for (j=0;j<n;j++)
             {
                 if (adj[i][j] < min)
                 {
                    min=adj[i][j];
                    a=u=i;
                    b=v=j;
                 }
             }
         }
         u=find(a);
         v=find(b);
         if (u!=v)
         {
            parent[v]=u;
            printf("%d -> %d : %d",a+1,b+1,min);
            total=total+min;
         }
     }
     printf("\nMinimun Cost Of Spanning Tree : %d\n",total);
}
void main()
{
     int v1,v2,k=0;
     printf("\nEnter Number Of Vertices For Undirected Graph : ");
     scanf("%d",&v);
     for (i=0;i<v;i++)
     {
         for (j=0;j<v;j++)
             if (adj[i][j]==0)
                adj[i][j]=mx;
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
            adj[v1-1][v2-1]=adj[v2-1][v1-1]=wt;
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
    
    /*
    
     kruskals();
     printf("  ");
     for (i=1;i<=v;i++)
         printf(" %4d",i);
     printf("\n");
     for (i=0;i<v;i++)
     {
         printf("%4d ",i+1);
         for (j=0;j<v;j++)
             printf("%4d ",adj[i][j]);
         printf("\n");
     }
}
 /*  printf("\nEdge    Weight\n");
     for (i=1;i<v;i++)
     {
          printf("%d <-> %d : %d \n",parent[i]+1,i+1,graph[i][parent[i]]);
          cost=cost+graph[i][parent[i]];
     }
     printf("\nMinimum Cost Of Spanning Tree : %d \n",cost);
     */


/*
int find(int x)
{
    if (parent[x]==x)
       return x;
    else
       return find(parent[x]);
}
void kruskals(int n,int m,int edges[][3])
{
     for (i=0;i<n;i++)
         parent[i]=i;
     int wt=0;
     printf("Edges Of MST : \n");
     for (i=0;i<m;i++)
     {
         u=edges[i][0];
         v=edges[i][1];
         w=edges[i][2];
         if (find(u)!=find(v))
         {
            parent[find(u)]=find(v);
            wt=wt+w;
            printf("\n%d <-> %d : %d ",u,v,w);
         }
     }
     printf("\nMST Weight : %d\n",wt);
}
*/
