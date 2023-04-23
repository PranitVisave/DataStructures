#include<stdio.h>
#include<stdlib.h>
#include"dlfunc.h"

void main(void)
{ 
     int pos,ch=1,val; 
     while (ch>=1 || ch<=7)
     {
           printf("\nThe Choices Are as follows :\n");
           printf("1 : Create Doubly Linked List \n");
     	   printf("2 : Display Created Doubly Linked List \n");
   	   printf("3 : Insert an Element into Linked List\n");
     	   printf("4 : Delete an Element by Position \n");
     	   printf("5 : Delete An Element By Value \n");
     	   printf("6 : Reverse \n");
     	   printf("7 : Search For an Element In Linked List \n");
     	   printf("8 : Exit \n");     
     	   printf("\nEnter The Operation to Perform : ");
           scanf("%d",&ch);
           switch (ch)
           {
                  case 1:
                         if (startl!=NULL && startr!=NULL)
                            printf("\nDoubly Linked List Already Exists...\n");
                         else
                         {
                            printf("\nEnter Number Of Nodes To Insert In Doubly Linked List : ");
                            scanf("%d",&n);
                            if (n<=0)
                               printf("\nEnter Valid Number Of Nodes...\n");
                            else
                               create(); 
                         }
                         break;
                  case 2:
                         if (startl==NULL && startr==NULL)
                         {
                             printf("\n The Linked List is Empty...\n");
                             return;
                         }
                         display();
                         break;
                 case 3:
                         if (startl==NULL && startr==NULL)
                            printf("\nDoubly Linked List is Empty !");
                         else
                         { 
                            printf("\nEnter Position To Insert Node In Singly Linked List : ");
                            scanf("%d",&pos);
                            if (pos<1 || pos>n+1) 
                               printf("\nEnter A Valid Position ! ");
                            else
                               insert(pos);
                         }
                         break;
                 case 4:
                         if (startr==NULL && startl==NULL)
                            printf("\nLinked List Is Empty ! ");
                         else
                         {
                            printf("\nEnter Position Of Node To Delete From Singly Linked List : ");
                            scanf("%d",&pos);
                            if (pos<1 || pos>n)
                               printf("\nEnter A Valid Position ! ");
                            else
                               dpos(pos);
                         }
                         break;
                  case 5:
                         if (startr==NULL && startl==NULL)
                            printf("\nDoubly Linked List Is Empty ! ");
                         else
                         {
                            printf("\nEnter Value To Delete From Linked List : ");
                            scanf("%d",&val);
                            dval(val);
                         }
                         break;
                 case 6:
                        if (startl==NULL && startr==NULL)
                           printf("\nLinked List Is Empty ! ");
                        else 
                           reverse();
                        break;
                  case 7:
                        if (startr==NULL && startl==NULL)
                           printf("\nLinkd List Is Empty ! \n");
                        else
                        {
                           printf("\nEnter Element To Search In Linked List : ");
                           scanf("%d",&val);
                           search(val);
                        }  
                        break;
                case 8:
                        printf("\n---EXIT---\n");
                        break;
                  default:
                        printf("\nEnter a Valid Choice ! ");
                        break; 
             }
            if (ch!=6 || startr==NULL && startl==NULL)
               display();
            printf("\nTotal Number Of Nodes In Doubly Linked List : %d\n",n);
        }  
}

