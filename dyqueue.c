#include"dqfunc.h"
void main()
{
     int op=1,val;
     printf("\nDYNAMIC IMPLEMENTATION OF LINEAR QUEUE\n");
     init();
     while (op>=1 || op<=5)
     {
           printf("\nOperations To Perform On Queue : \n");
           printf("\t1 : Add Element To Queue (ENQUEUE) \n");
           printf("\t2 : Delete Element From Queue (DEQUEUE) \n");
           printf("\t3 : Peek Front Element Of Queue \n");
           printf("\t4 : Check If Qeeue Is Empty \n");
           printf("\t5 : Exit \n");
           printf("\nEnter Operation To Perform On Queue : ");
           scanf("%d",&op); 
           switch(op)
           {
                 case 1:
                       printf("\nEnter Element To Add to Queue : ");
                       scanf("%d",&val);
                       enqueue(val);
                       break;
                 case 2:
                       if (isempty())
                          printf("\nQueue Is Empty...\n");
                       else 
                          printf("\nDeleted Element Is %d.\n",dequeue());
                       break;
                 case 3:
                       if (isempty())
                          printf("\nQueue Is Empty...\n");
                       else
                          peek();
                       break;
                 case 4:
                       if (isempty())
                          printf("\nQueue Is Empty...\n");
                       else
                          printf("\nQueue Is Not Empty...\n");
                       break;
                 case 5:
                       exit(0);
                 default:
                       printf("\nEnter A Valid Operation...\n");
           }
           if (isempty())
           {
              front=rear=NULL;
              printf("\nQueue Is Empty...\n");
           }
           else
           {
              printf("\nQueue Is : \n");
              printf("Front-->");
              for (temp=front;temp!=rear;temp=temp->next)
                  printf("%d::",temp->data);
              printf("%d",temp->data);
              printf("<--Rear\n");
           }
       }
}                      


/*

*/      
