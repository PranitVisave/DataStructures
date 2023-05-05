#include<stdio.h>
#define MAX 10
int vis[MAX],q[MAX],f,r;
int adj[MAX][MAX],in[MAX],top[MAX],v,x=-1;
void init()
{
     int i;
     for (i=0;i<MAX;i++)
     {
         top[i]=0;
         vis[i]=0;
         q[i]=0;
         adj[i][i]=0;
         in[i]=0;
    }
     f=r=-1;
}
void toposort()
{
     int vrt,i,j=0;
    // printf("\n Entry...");
     for (i=0;i<v;i++)
     {
         if (in[i]==0)
            q[++r]=i;
     }
     while (f!=r)
     {
           vrt=q[++f];
           top[j++]=vrt;
          // printf("\n %4d ",vrt);
           for (i=0;i<v;i++)
           {
               if (adj[vrt][i]==1)
               {
                  in[i]--;
                  if (in[i]==0)
                     q[++r]=i;
               }
          }
          //printf("%d  ",vrt);
     }
     for (i=0;i<j;i++)
         printf("%4d ",top[i]+1);
}
void printDegree(int v)
{
     int i,j;
     printf("\nVertex InDegree \n");
     for (i=0;i<v;i++)
     {
         for (j=0;j<v;j++)
         {
           //  if (adj[i][j]==1)
          //      out[i]++;
             if (adj[j][i]==1)
                in[i]++;
         }
         printf("   %d        %d    ",i+1,in[i]);
         printf("\n");
     }
}

void main()
{
     int i,j,e,v1,v2,start;
     init();
     printf("\nEnter Number Of Vertices For Directed Acyclic Graph : ");
     scanf("%d",&v);
     for (i=0;i<v;i++)
         for (j=0;j<v;j++)
             adj[i][j]=0;
     printf("\nEnter Number Of Edges Directed Acyclic Graph : ");
     scanf("%d",&e);
     for (i=0;i<e;i++)
     {
         printf("\nEnter Edge %d : ",i+1);
         scanf("%d%d",&v1,&v2);
         if ((v1>=1 && v1<=v) && (v2>=1 && v2<=v))
         {
            adj[v1-1][v2-1]=1;
            in[v2++];
         }
         else
            printf("\nInvalid Vertex...");
     }
     printf("\nAdjacency Matrix For Graph With %d Vertices & %d Edges : \n",v,e);
     //printf("           InDegree\n   ");
     for (i=1;i<=v;i++)
         printf("%4d",i);
     printf("\n");
     for (i=0;i<v;i++)
     {
         printf("%4d",i+1);
        // printf("   %d ",in[j]);
         for (j=0;j<v;j++)
         {
             printf("%d ",adj[i][j]);
                     // for (j=0;j<v;j++)
             
         }
         printf("\n");
     }
     printDegree(v);
     printf("\nTopological Sort For Given Graph : \n ");
     toposort();
    // for (i=0;i<v;i++)
     //    printf(" %d ",top[i]);   
}


/*
OUTPUT:
sy17@pc35:~/DS_SEM_IV_79/Assig_5$ ./a.out

Enter Number Of Vertices For Directed Acyclic Graph : 5

Enter Number Of Edges Directed Acyclic Graph : 7

Enter Edge 1 : 1 2

Enter Edge 2 : 1 4 

Enter Edge 3 : 2 3

Enter Edge 4 : 4 2

Enter Edge 5 : 4 3

Enter Edge 6 : 4 5

Enter Edge 7 : 3 5

Adjacency Matrix For Graph With 5 Vertices & 7 Edges : 
  1  2  3  4  5
1  0 1 0 1 0 
2  0 0 1 0 0 
3  0 0 0 0 1 
4  0 1 1 0 1 
5  0 0 0 0 0 

Vertex InDegree 
   1        0    
   2        2    
   3        2    
   4        1    
   5        2    

Topological Sort For Given Graph : 
 
 Entry...   1    4    2    3    5
 
 
 */




/*
void toposort()
{
     int i,vrt;
     for (i=1;i<=v;i++)
     {
         if (in[i]==0)
            queue[++rear]=i;
     }
     while (front!=rear)
     {
           for (i=0;i<vrt;i++)
           {
               //topo[i]=queue[++front];              
               if (adj[vrt][i]==1)
               {
                  in[i]--;
                  if (in[i]==0)
                     queue[++rear]=i;                  
               }
           }

     } 
     //for (i=1;i<=v;i++)
     //    printf(" %d ",topo[i]);  
}
*/











