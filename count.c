#include<stdio.h>
void count(int [],int);
void main()
{
     int a[20],i,n;
     printf("\nEnter Size of Dataset: ");
     scanf("%d",&n);
     printf("\nEnter %d elements in array: ",n);
     for (i=0;i<n;i++)
         scanf("%d",&a[i]);
     count(a,n);
     printf("\nThe Sorted Dataset is as Follows:\n");
     for (i=0;i<n;i++)
         printf("%d\t",a[i]);
     printf("\n");
}      
void count(int a[],int n)
{   
     int c[20],i,max,j;
     max=a[0];
     for (i=1;i<=n-1;i++)
         if (a[i]>max)
            max=a[i];
     for (i=0;i<=max;i++)
         c[i]=0;
     for (i=0;i<n;i++)
         c[a[i]]++;
     for (i=1;i<=max;i++)
         c[i]=c[i]+c[i-1];
     for (i=n-1,j=max;i>=0 && j>=0;)
         if (c[j]!=c[j-1])
         {
            a[i]=j;
            c[j]--;
            i--;
         }
         else
            j--;
}
/*
OUTPUT
sy17@pc35:~/DS_SEM_III_17/Assig_3$ cc count.c
sy17@pc35:~/DS_SEM_III_17/Assig_3$ ./a.out

Enter Size of Dataset: 5

Enter 5 elements in array: 3
5
7
5
3

The Sorted Dataset is as Follows:
3	3	5	5	7	

 */
  
  
  
  
