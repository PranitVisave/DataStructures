/* Assignment 2 Set A
   Q.1
   Bubble Sort
*/
#include<stdio.h>
void bubble(int a[],int n)
{
     int i,j,temp;
     for (i=0;i<n-1;i++)
         for (j=0;j<n-i-1;j++)
         
              if (a[j]>a[j+1])
              {
                  temp=a[j];
                  a[j]=a[j+1];
                  a[j+1]=temp;
              }
         
}         
void main()
{
      int a[10],n,i;
      printf("\n Enter Size of an Array: \n");
      scanf("%d",&n);
      printf("\n Enter %d Elements in Array: \n",n);
      for (i=0;i<n;i++)
          scanf("%d",&a[i]);
      bubble(a,n);
      printf("\n The Sorted Array is as Follows:\n");
      for (i=0;i<n;i++)
          printf("%d\t",a[i]);
      printf("\n");    
}
                        
/*
OUTPUT
sy17@pc51:~/DS_SEM_III_17/Assig_2$ cc bubble.c
sy17@pc51:~/DS_SEM_III_17/Assig_2$ ./a.out

 Enter Size of an Array: 
5

 Enter 5 Elements in Array: 
23
12
45
3
56

 The Sorted Array is as Follows:
3	12	23	45	56
----------X------------	
sy17@pc51:~/DS_SEM_III_17/Assig_2$ ./a.out

 Enter Size of an Array: 
7

 Enter 7 Elements in Array: 
12
56
23
90
34
1
45

 The Sorted Array is as Follows:
1	12	23	34	45	56	90	
*/

