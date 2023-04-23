/* Assignment 1 Set 1A*/
#include<stdio.h> 

int main()
{
    int a[10],n,key,i,pos;
    int linear_s(int a[],int n,int key);
    printf("How many elements in array?\n");
    scanf("%d",&n);
    printf("Enter %d elements in array:\n",n);
  
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    printf("Enter element to search:\n");
    scanf("%d",&key);
    pos=linear_s(a,n,key);
    if (pos==-1)
       printf(" \n %d Element Not Found \n",key);
    else
       printf("%d element Found at  positon : %d\n",key,pos+1);
}
int linear_s(int a[],int n,int key)
{
    int i;    
    for (i=0;i<n;i++)
        if (a[i]==key)
           return i; 
    return -1; 
}    

/* OUTPUT   1:

sy17@pc45:~/DS_SEM_III_17/Assig_1$ cc linear.c
sy17@pc45:~/DS_SEM_III_17/Assig_1$ ./a.out
How many elements in array?
5
Enter 5 elements in array:
11
22
33
55
44
Enter element to search:
33
33 element Found at  positon : 3
sy17@pc45:~/DS_SEM_III_17/Assig_1$ ./a.out
How many elements in array?
6
Enter 6 elements in array:
77
22
55
11
33
88
Enter element to search:
99
 
 99 Element Not Found 
sy17@pc45:~/DS_SEM_III_17/Assig_1$ 


OUTPUT 2:

 sy17@pc45:~/DS_SEM_III_17/Assig_1$ cc linear.c
sy17@pc45:~/DS_SEM_III_17/Assig_1$ ./a.out
How many elements in array?
5
Enter 5 elements in array:
11
22
33
55
44
Enter element to search:
33
33 element Found at  positon : 3
sy17@pc45:~/DS_SEM_III_17/Assig_1$ ./a.out
How many elements in array?
6
Enter 6 elements in array:
77
22
55
11
33
88
Enter element to search:
99
 
 99 Element Not Found 
sy17@pc45:~/DS_SEM_III_17/Assig_1$ 


*/
