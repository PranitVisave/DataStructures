#include<stdio.h>
void main()
{
     int i,j,n,key,ind,k,s;
     printf("Enter Size Of Hash Table : ");
     scanf("%d",&n);
     int hash[n];
    // printf("\nEnter Key Of Hash Table : ");
    // scanf("%d",&k);
     printf("\nInitial Hash Table :\nIndex  Data\n");
     for (i=0;i<n;i++)
     {
         hash[i]=-1;
         printf("%d        %d\n",i,hash[i]);
     }
     printf("Enter %d Elements : ",n);
     for (i=0;i<n;i++)
     {
         printf("\nEnter Element  : ",i);
         scanf("%d",&key);
         s=key*key;         
         if (s<100)
            ind=s%10;
            //printf("index %d : ",ind);
         else if (s<1000)
         {
            s=s/10;
            ind=s%10;
          //  printf("index %d : ",ind);
         }
         else if (s<10000)
         {
            s=s/10;
            ind=s%100;
            //printf("index %d : ",ind);
         }  
         else
            printf("\nInvalid Data...\n");
         if (hash[ind]!=-1)
         {
            printf("\nCollision Occured At Index %d for %d Element...\n",ind,key);
            //i--;
         }
         else
            hash[ind]=key;
         printf("Updated Hash Table :\nIndex  Data\n");
         for (j=0;j<n;j++)
             printf("  %d     %d\n",j,hash[j]);
     }  
}

/*
OUTPUT:-

sy17@pc35:~/DS_SEM_IV_79/Assig_7$ ./a.out
Enter Size Of Hash Table : 10

Initial Hash Table :
Index  Data
0        -1
1        -1
2        -1
3        -1
4        -1
5        -1
6        -1
7        -1
8        -1
9        -1
Enter 10 Elements : 
Enter Element  : 10
Updated Hash Table :
Index  Data
  0     10
  1     -1
  2     -1
  3     -1
  4     -1
  5     -1
  6     -1
  7     -1
  8     -1
  9     -1

Enter Element  : 13
Updated Hash Table :
Index  Data
  0     10
  1     -1
  2     -1
  3     -1
  4     -1
  5     -1
  6     13
  7     -1
  8     -1
  9     -1

Enter Element  : 100

Invalid Data...

Collision Occured At Index 6 for 100 Element...
Updated Hash Table :
Index  Data
  0     10
  1     -1
  2     -1
  3     -1
  4     -1
  5     -1
  6     13
  7     -1
  8     -1
  9     -1

Enter Element  : 6

Collision Occured At Index 6 for 6 Element...
Updated Hash Table :
Index  Data
  0     10
  1     -1
  2     -1
  3     -1
  4     -1
  5     -1
  6     13
  7     -1
  8     -1
  9     -1

Enter Element  : 23
Updated Hash Table :
Index  Data
  0     10
  1     -1
  2     23
  3     -1
  4     -1
  5     -1
  6     13
  7     -1
  8     -1
  9     -1

Enter Element  : 26
Updated Hash Table :
Index  Data
  0     10
  1     -1
  2     23
  3     -1
  4     -1
  5     -1
  6     13
  7     26
  8     -1
  9     -1

Enter Element  : 11

Collision Occured At Index 2 for 11 Element...
Updated Hash Table :
Index  Data
  0     10
  1     -1
  2     23
  3     -1
  4     -1
  5     -1
  6     13
  7     26
  8     -1
  9     -1

Enter Element  : 12
Updated Hash Table :
Index  Data
  0     10
  1     -1
  2     23
  3     -1
  4     12
  5     -1
  6     13
  7     26
  8     -1
  9     -1

Enter Element  : 13

Collision Occured At Index 6 for 13 Element...
Updated Hash Table :
Index  Data
  0     10
  1     -1
  2     23
  3     -1
  4     12
  5     -1
  6     13
  7     26
  8     -1
  9     -1

Enter Element  : 14
Updated Hash Table :
Index  Data
  0     10
  1     -1
  2     23
  3     -1
  4     12
  5     -1
  6     13
  7     26
  8     -1
  9     14 


*/
