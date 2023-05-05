#include<stdio.h>
#include<stdlib.h>
void maxheap(int a[],int i,int n)
{
     int ch,t;
     while (2*i+1 < n)
     {
           ch=2*i+1;
           if (a[ch+1] > a[ch] && ch < n-1)
              ch++;
           if (a[ch] > a[i])
           {
              //swap
              t=a[ch];
              a[ch]=a[i];
              a[i]=t;
           }
           i=ch;
     }
}
void heapsort(int a[], int n)
{
     int i,t;
     for (i=n/2;i>=0;i--)
         maxheap(a,i,n);
     printf("\nMAX HEAP : ");
     for (i=0;i<n;i++)
         printf("%d ",a[i]);
     for (i=n-1;i>0;i--)
     {
         t=a[0];
         a[0]=a[i];
         a[i]=t;
         maxheap(a,0,i);
     }
}
void main()
{
     int a[10],i,n;
     printf("\nEnter Number Of Elements : ");
     scanf("%d",&n);
     printf("\nEnter %d Elements : \n",n);
     for (i=0;i<n;i++)
         scanf("%d",&a[i]);
     heapsort(a,n);
     printf("\nSorted Aray Is : ");
     for (i=0;i<n;i++)
         printf("%d\t",a[i]);
}
