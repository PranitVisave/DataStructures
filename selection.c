/* Assignment 2 Set A
   Q.3:
   selection sort
*/

#include<stdio.h>
void selection(int a[],int n)
{
     int i,j,temp,min,loc;
     for (i=0;i<n-1;i++)
     {
         min=a[i];
         loc=i;
         for (j=i+1;j<n;j++)
             if (a[j]<min) 
             {
                 min=a[j];
                 loc=j;
             }
         temp=a[i];
         a[i]=a[loc];
         a[loc]=temp;
     }
}
void main()
{
     int a[10],n,i;
     printf("\nEnter Size Of an Array:\n");
     scanf("%d",&n);
     printf("\nEnter %d Elements in Array:\n",n);
     for (i=0;i<n;i++)
         scanf("%d",&a[i]);
     selection(a,n);
     printf("\nThe Sorted Array in Ascending Order is as follows:\n");
     for (i=0;i<n;i++)
         printf("%d\t",a[i]);
     printf("\n");
}

/*
OUTPUT
sy17@pc51:~/DS_SEM_III_17/Assig_2$ cc selection.c
sy17@pc51:~/DS_SEM_III_17/Assig_2$ ./a.out

Enter Size Of an Array:
5

Enter 5 Elements in Array:
10
23
67
13
8

The Sorted Array in Ascending Order is as follows:
8	10	13	23	67

--------X------------	
sy17@pc51:~/DS_SEM_III_17/Assig_2$ ./a.out

Enter Size Of an Array:
7

Enter 7 Elements in Array:
68
30
79
20
1
56
35 

The Sorted Array in Ascending Order is as follows:
1	20	30	35	56	68	79	

----------X----------

sy17@pc51:~/DS_SEM_III_17/Assig_2$ cc selection.c
sy17@pc51:~/DS_SEM_III_17/Assig_2$ ./a.out

Enter Size Of an Array:
10

Enter 10 Elements in Array:
85
30
20
34
1
56
38
09
34
12

The Sorted Array in Ascending Order is as follows:
1	9	12	20	30	34	34	38	56	85
*/

