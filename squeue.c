#include"sqfunc.h"
void main()
{
     int op=1;
     printf("\nSTATIC IMPLEMENTATION OF A LINEAR QUEUE\n");
     init();
     while (op>=1 || op<=6)
     {
           printf("\nOperations To Perform On Queue : \n");
           printf("\t1 : Add Element To Queue (ENQUEUE) \n");
           printf("\t2 : Delete Element From Queue (DEQUEUE) \n");
           printf("\t3 : Peek Front Element Of Queue \n");
           printf("\t4 : Check If Qeeue Is Empty \n");
           printf("\t5 : Check If Queue Is Full \n");
           printf("\t6 : Exit \n");
           printf("\nEnter Operation To Perform On Queue : ");
           scanf("%d",&op); 
           switch(op)
           {
                 case 1:
                       if (rear==MAX-1)
                          printf("\nQueue Overflow Occured...\n");
                       else
                          enque();
                       break;
                 case 2:
                       if (isempty())
                          printf("\nQueue Is Empty...\n");
                       else 
                          deque();
                       break;
                 case 3:
                       if (isempty())
                          printf("\nQueue Is Empty...\n");
                       else
                          peek();
                       break;
                 case 4:
                       if (isempty())
                          printf("\nThe Queue Is Empty...\n");
                       else
                          printf("\nThe Queue Is Not Empty...\n");                       
                       break;
                 case 5:
                       if (isfull())
                          printf("\nThe Queue Is Full...\n");
                       else
                          printf("\nThe Queue Is Not Full...\n"); 
                       break;
                 case 6:
                       exit(0);
                 default:
                       printf("\nEnter A Valid Operation...\n");
           }
           display();
      }
}                       
                     
