#include<stdio.h>
#define MAX 10
int in[MAX]={0},out[MAX]={0},adj[MAX][MAX];
void printDegree(int v)
{
     int i,j;
     printf("\nVertex InDegree OutDegree Total Degree\n");
     for (i=0;i<v;i++)
     {
         for (j=0;j<v;j++)
         {
             if (adj[i][j]==1)
                out[i]++;
             if (adj[j][i]==1)
                in[i]++;
         }
         printf("   %d        %d         %d         %d      ",i+1,in[i],out[i],in[i]+out[i]);
         printf("\n");
     }
}

void main()
{
     int i,j,v,e,v1,v2;
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
            adj[v1-1][v2-1]=1;
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
     printDegree(v);
}
/*
OUTPUT

sy17@pc35:~/DS_SEM_IV_79/Assig_3$ ./a.out

Enter Number Of Vertices : 5

Enter Number Of Edges : 5

Enter Edge 1 : 1 2

Enter Edge 2 : 1 3

Enter Edge 3 : 3 4

Enter Edge 4 : 4 2

Enter Edge 5 : 5 3

Adjacency Matrix For Graph With 5 Vertices & 5 Edges : 
   1 2 3 4 5
1  0 1 1 0 0 
2  0 0 0 0 0 
3  0 0 0 1 0 
4  0 1 0 0 0 
5  0 0 1 0 0 

Vertex InDegree OutDegree Total Degree
   1        0         2         2      
   2        2         0         2      
   3        2         1         3      
   4        1         1         2      
   5        0         1         1 
  */

