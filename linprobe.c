#include<stdio.h>
#define M 10
struct node
{
       int data,probe;
};
int key=10,i,j,ind;
struct node hash[M];
void insert(int val)
{
     ind=key%M;
     if (hash[ind].data!=-1)
     {
        printf("\nCollision Occured At Index %d for %d Element...\n",ind,key);
     }
     else
        hash[ind].data=key;
}
void display()
{
     printf("\nIndex : Data : Probe\n");
     for (i=0;i<M;i++)
         printf(" %d    %d     %d \n ",i,hash[i].data,hash[i].probe);
}
void main()
{
     int j,k,cnt=0,n,key,val;
     
     int op=1;
     for (i=0;i<M;i++)
         hash[i].data=hash[i].probe=-1;
     while (op!=0)
     {
           printf("\nOperations To Perform On Hash Table : ");
           printf("\n1 : Insert Data In Hash Table  ");
           printf("\n2 : Delete Data From Hash Table ");
           printf("\n3 : Search For An Element In Hash Table ");
           printf("\n4 : Display Hash Table ");
           printf("\n5 : Exit\n");
           printf("\nInitial Hash Table :\nIndex  Data  Probe\n");
           for (i=0;i<M;i++)
               printf("  %d  :  %d  :  %d \n",i,hash[i].data,hash[i].probe);
           printf("\nEnter Operation To Perform On Hash Table : ");
           scanf("%d",&op);
           switch (op)
           {
                  case 1:
                        printf("\nEnter Element To Insert In Hash Table : ");
                        scanf("%d",val);
                        insert(val);
                        printf("\n%d Inserted Succesfully In Hash Table \n",val);
                        break;
                 //  case 2:
                  //      printf("\nEnter Element To Delete From hash Table : ");
                  //      scanf("%d",&val);
                  //      break;
           }
      }
}





