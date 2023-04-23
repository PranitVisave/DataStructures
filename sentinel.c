//Assignment 1 Set A1
#include<stdio.h>
int sentinel(int a[],int n,int key)
{
    int last,i=0;
    last=a[n-1];
    a[n-1]=key;
    while (a[i]!=key)
          i++;
    a[n-1]=last;
    if (a[i]==key)
       return i;
    return -1;
}
int main()
{
    int a[10],n,key,pos,i;
    int sentinel(int a[],int n,int key);
    printf("Enter Size of an Array : \n");
    scanf("%d",&n);
    printf("\nEnter %d Element in Array: \n",n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);      
    printf("Enter element to search: \n");
    scanf("%d",&key);
    pos=sentinel(a,n,key);
    if (pos==-1)
       printf("\n %d Element Not Found\n",key);
    else
       printf("\n %d Element found at %d position\n",key,pos+1);
}       

/* OUTPUT 1:
-
sy17@pc45:~/DS_SEM_III_17/Assig_1$ cc sentinel.c
sy17@pc45:~/DS_SEM_III_17/Assig_1$ ./a.out
Enter Size of an Array : 
5

Enter 5 Element in Array: 
70
50
30
60  
10
Enter element to search: 
10

 10 Element found at 5 position
OUTPUT 2 : 
sy17@pc45:~/DS_SEM_III_17/Assig_1$ ./a.out
Enter Size of an Array : 
5

Enter 5 Element in Array: 
22
77
44
99
33
Enter element to search: 
66

 66 Element Not Found
sy17@pc45:~/DS_SEM_III_17/Assig_1$ 
*/
