#include<stdio.h>
void main()
{
     int i,j,n,ind,k,sum=0,cnt,num;
     long int key;
     printf("Enter Size Of Hash Table : ");
     scanf("%d",&cnt);
     long int hash[cnt];
    // printf("\nEnter Key Of Hash Table : ");
    // scanf("%d",&k);
     printf("\nInitial Hash Table :\nIndex  Data\n");
     for (i=0;i<cnt;i++)
     {
         hash[i]=-1;
         printf("%d        %ld\n",i,hash[i]);
     }
     printf("Enter 10 Elements : ",cnt);
     for (i=0;i<cnt;i++)
     {
         printf("\nEnter Element  : ");
         scanf("%ld",&key);
         //printf("%ld\n",key);
         num=key;
         while (num!=0)
         {
               n=num%1000;
               sum=sum+n;
               num=num/1000;
             //  printf("n=%d   sum=%d  key%d\n",n,sum,num);
               ind=0;
         }
         ind=sum%10;
         sum=0;
         if (hash[ind]!=-1)
            printf("\nCollision Occured At Index %d for %ld Element...\n",ind,key);
         else
            hash[ind]=key;
         printf("Updated Hash Table :\n\nIndex  Data\n");
         for (j=0;j<cnt;j++)
             printf("  %d     %ld\n",j,hash[j]);
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
Enter 0 Elements : 
Enter Element  : 123456789
Updated Hash Table :

Index  Data
  0     -1
  1     -1
  2     -1
  3     -1
  4     -1
  5     -1
  6     -1
  7     -1
  8     123456789
  9     -1

Enter Element  : 987654321
Updated Hash Table :

Index  Data
  0     987654321
  1     -1
  2     -1
  3     -1
  4     -1
  5     -1
  6     -1
  7     -1
  8     123456789
  9     -1

Enter Element  : 1627384950
Updated Hash Table :

Index  Data
  0     987654321
  1     -1
  2     1627384950
  3     -1
  4     -1
  5     -1
  6     -1
  7     -1
  8     123456789
  9     -1

Enter Element  : 13245769
Updated Hash Table :

Index  Data
  0     987654321
  1     -1
  2     1627384950
  3     -1
  4     -1
  5     -1
  6     -1
  7     -1
  8     123456789
  9     13245769

Enter Element  : 165432987
Updated Hash Table :

Index  Data
  0     987654321
  1     -1
  2     1627384950
  3     165432987
  4     -1
  5     -1
  6     -1
  7     -1
  8     123456789
  9     13245769

Enter Element  : 67281945
Updated Hash Table :

Index  Data
  0     987654321
  1     -1
  2     1627384950
  3     165432987
  4     -1
  5     -1
  6     67281945
  7     -1
  8     123456789
  9     13245769

Enter Element  : 111111111

Collision Occured At Index 9 for 111111111 Element...
Updated Hash Table :

Index  Data
  0     987654321
  1     -1
  2     1627384950
  3     165432987
  4     -1
  5     -1
  6     67281945
  7     -1
  8     123456789
  9     13245769

Enter Element  : 222221111 

Collision Occured At Index 3 for 222221111 Element...
Updated Hash Table :

Index  Data
  0     987654321
  1     -1
  2     1627384950
  3     165432987
  4     -1
  5     -1
  6     67281945
  7     -1
  8     123456789
  9     13245769

Enter Element  : ^C
sy17@pc35:~/DS_SEM_IV_79/Assig_7$ 


*/
