#include<stdio.h>
#define N 10
int g[N][N],n,sol[N][N],i,j;
void floydwarshal()
{
     int i,j,k;
     for (i=0;i<n;i++)
         for (j=0;j<n;j++)
             sol[i][j]=g[i][j];
     for (k=0;k<n;k++)
         for (i=0;i<n;i++)
             for (j=0;j<n;j++)
             {
                 if (i==j)
                    sol[i][j]=0;
                 if (sol[i][k]+sol[k][j] < sol[i][j])
                    sol[i][j]=sol[i][k]+sol[k][j];
             }
}
void print()
{
     int i,j;
     printf("   ");
     for (i=1;i<=n;i++)
         printf("%4d",i);
     printf("\n");
     for (i=0;i<n;i++)
     {
         printf("%d  ",i+1);
         for (j=0;j<n;j++)
             printf("%4d ",sol[i][j]);
         printf("\n");
     }
     printf("\n");
}
void main()
{
     int max=0,wt;
     int e,v1,v2,cost=0;
     printf("\nEnter Number Of Vertices For Directed Graph : ");
     scanf("%d",&n);
     for (i=0;i<n;i++)
         for (j=0;j<n;j++)
             if (i==j)
                g[i][j]=0;
             else
                 g[i][j]=999;
     printf("\nEnter Number Of Edges For Undirected Graph : ");
     scanf("%d",&e);
     for (i=0;i<e;i++)
     {
         printf("\nEnter Edge %d And Its Weight : ",i+1);
         scanf("%d%d%d",&v1,&v2,&wt);
         g[v1-1][v2-1]=wt;      
     }
     printf("Weight Adjacency Matrix :\n");
     printf("  ");
     for (i=1;i<=n;i++)
         printf(" %4d",i);
     printf("\n");
     for (i=0;i<n;i++)
     {
         printf("%d  ",i+1);
         for (j=0;j<n;j++)
             printf("%4d ",g[i][j]);
         printf("\n");
     }
     printf("\n");
     floydwarshal();
     printf("\nShotest Path Matrix : \n");
     print();
     printf("\nShortest Path : \n");
     printf(" Edge  Weight\n");
     for (i=0;i<n;i++)
         for (j=0;j<n;j++)
             // if (i!=j)
                 printf("%d -> %d : %d\n",i+1,j+1,sol[i][j]);
}

/*
OUTPUT:

sy17@pc36:~/DS_SEM_IV_79/Assig_6$ ./a.out

Enter Number Of Vertices For Directed Graph : 4

Enter Number Of Edges For Undirected Graph : 5

Enter Edge 1 And Its Weight : 1 3 -2

Enter Edge 2 And Its Weight : 3 4 2

Enter Edge 3 And Its Weight : 4 2 -1

Enter Edge 4 And Its Weight : 2 1 4

Enter Edge 5 And Its Weight : 2 3 3
Weight Adjacency Matrix :
      1    2    3    4
1     0  999   -2  999 
2     4    0    3  999 
3   999  999    0    2 
4   999   -1  999    0 


Shotest Path Matrix : 
      1   2   3   4
1     0   -1   -2    0 
2     4    0    2    4 
3     5    1    0    2 
4     3   -1    1    0 


Shortest Path : 
 Edge  Weight
1 -> 1 : 0
1 -> 2 : -1
1 -> 3 : -2
1 -> 4 : 0
2 -> 1 : 4
2 -> 2 : 0
2 -> 3 : 2
2 -> 4 : 4
3 -> 1 : 5
3 -> 2 : 1
3 -> 3 : 0
3 -> 4 : 2
4 -> 1 : 3
4 -> 2 : -1
4 -> 3 : 1
4 -> 4 : 0

*/
