/* Assignment 2 Set A
   Q.2
   Insertion Sort
*/

#include<stdio.h>
void insertion(int a[],int n)
{
     int i,j,key;
     for (i=1;i<=n-1;i++)
     {
          key=a[i];
          j=i-1;
          while (j>=0 && a[j]>key)
          {
                 a[j+1]=a[j];
                 j--;
          }
          a[j+1]=key;
      }
}      
void main()
{
     int a[10],i,n;
     printf("\nEnter Size of An Array:\n");
     scanf("%d",&n);
     printf("\nEnter %d Elements in Array:\n",n);
     for (i=0;i<n;i++)
         scanf("%d",&a[i]);
     insertion(a,n);
     printf("\nThe Sorted Array in Ascending Order is as follows:\n");
     for (i=0;i<n;i++)
         printf("%d\t",a[i]);
     printf("\n");
}

   
/*
OUTPUT
sy17@pc51:~/DS_SEM_III_17/Assig_2$ cc insertion.c
sy17@pc51:~/DS_SEM_III_17/Assig_2$ ./a.out

Enter Size of An Array:
5

Enter 5 Elements in Array:
23
10
3
56
77

The Sorted Array in Ascending Order is as follows:
3	10	23	56	77	
-------X---------
OUTPUT
sy17@pc51:~/DS_SEM_III_17/Assig_2$ ./a.out

Enter Size of An Array:
7

Enter 7 Elements in Array:
6
3
89
23
56
10
45

The Sorted Array in Ascending Order is as follows:
3	6	10	23	45	56	89	
*/

