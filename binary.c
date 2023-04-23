#include<stdio.h>
int main()
{
    int a[10],n,i,key,loc;
    int binary(int a[],int n,int key);
    printf("Enter Size of Array: \n");
    scanf("%d",&n);
    printf("Enter %d Sorted Elements in Array:\n",n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter Element to Search: \n");
    scanf("%d",&key);
    loc=binary(a,n,key);
    
    if (loc==-1)
       printf("\n %d Element Not Found\n",key);
    else
       printf("\n %d Element found at Location %d.\n",key,loc+1);
}

int binary(int a[],int n,int key)
{
    int low,mid,high;
    low=0;
    high=n-1;
    while (low<=high)
    {
          mid=(low+high)/2;
          if (a[mid]==key)
             return mid;
          else 
             if (a[mid]>key)
                high=mid-1;
             else
                low=mid+1;
    }
    return -1;
}

/*  OUTPUT 
sy17@pc38:~$ cc binary.c
sy17@pc38:~$ ./a.out
Enter Size of Array: 
5
Enter 5 Elements in Array:
1
2
3
4
5
Enter Element to Search: 
3
3 Element found at Location 3.sy17@pc38:~$ 
sy17@pc45:~/DS_SEM_III_17/Assig_1$ cc binary.c
sy17@pc45:~/DS_SEM_III_17/Assig_1$ ./a.out
Enter Size of Array: 
5
Enter 5 Sorted Elements in Array:
11
33
55
77
99
Enter Element to Search: 
66

 66 Element Not Found
sy17@pc45:~/DS_SEM_III_17/Assig_1$ 

*/
