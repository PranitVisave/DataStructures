#include<stdio.h>
int partition(int [],int,int);
void quick(int a[],int l,int u)
{
     int j;
     if (l<u)
     {
        j=partition(a,l,u);
        quick(a,l,j-1);
        quick(a,j+1,u);
     }
}
int partition(int a[],int lb,int ub)
{
    int dn=lb,up=ub,temp,key;
    key=a[lb];
    while (dn < up)
    { 
          while (a[dn]<=key)
                dn++;
          while (a[up]>key)
                up--;
          if (dn < up)
          {
             temp=a[dn];
             a[dn]=a[up];
             a[up]=temp;
          }
    } 
    a[lb]=a[up];
    a[up]=key;
    return up;
}
void main()
{
     int a[20],i,n;
     printf("\nEnter Size of Dataset: ");
     scanf("%d",&n);
     printf("\nEnter %d elements in Dataset: \n",n);
     for (i=0;i<n;i++)
         scanf("%d",&a[i]);
     quick(a,0,n-1);
     printf("\nThe Sorted Dataset is as follows: \n");
     for (i=0;i<n;i++)
         printf("%d\t",a[i]);
     printf("\n");
}

/*
OUTPUT
sy17@pc35:~/DS_SEM_III_17/Assig_3$ cc quick.c
sy17@pc35:~/DS_SEM_III_17/Assig_3$ ./a.out

Enter Size of Dataset: 7

Enter 7 elements in Dataset: 
33
77
12
89
53
67
35

The Sorted Dataset is as follows: 
12	33	35	53	67	77	89	

sy17@pc35:~/DS_SEM_III_17/Assig_3$ cc quick.c
sy17@pc35:~/DS_SEM_III_17/Assig_3$ ./a.out

Enter Size of Dataset: 5

Enter 5 elements in Dataset: 
23
45
12
78
34

The Sorted Dataset is as follows: 
12	23	34	45	78	

*/     


