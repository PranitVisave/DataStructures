#include<stdio.h>
#include<stdlib.h>
#include"slfunc.c"
void main(void)
{ 
     int pos,ch=1,val;
     while (ch>=1 && ch<=7)
     {
           printf("\nThe Choices Are as follows :\n");
           printf("1 : Create Singly Linked List \n");
     	   printf("2 : Display Created Singly Linked List \n");
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
                         if (start!=NULL)
                            printf("\nLinked List Already Exists ! ");
                         else
                         {
                            printf("\nEnter Number Of Nodes To Insert : ");
                            scanf("%d",&n);      
                            if (n<=0)
                               printf("\n Invalid number of nodes...");  
                            else
                               create(); 
                         }      
                         break;
                  case 2:
                         if (start==NULL)
                            printf("The Linked List Does Not Exist ! ");
                         else 
                            display();
                         break;
                 case 3:
                         if (start==NULL)
                            printf("\nLinked List is Empty !");
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
                         if (start==NULL)
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
                         if (start==NULL)
                            printf("\nLinked List Is Empty ! ");
                         else
                         {
                            printf("\nEnter Value To Delete From Linked List : ");
                            scanf("%d",&val);
                            dval(val);
                         }
                         break;
                  case 6:
                        if (start==NULL)
                           printf("\nLinked List Is Empty ! ");
                        else 
                           reverse();
                        break;
                  case 7:
                        if (start==NULL)
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
          printf("\n\n");
          display();
          printf("\nTotal Number Of Nodes Is %d ! \n",n);
        }  
}  

/* OUTPUT :
sy17@pc37:~/DS_SEM_III_17/Assig_4$ ./a.out

The Choices Are as follows :
1 : Create Singly Linked List 
2 : Display Created Singly Linked List 
3 : Insert an Element into Linked List
4 : Delete an Element by Position 
5 : Delete An Element By Value 
6 : Reverse 
7 : Search For an Element In Linked List 
8 : Exit 

Enter The Operation to Perform : 1

Enter Number Of Nodes To Insert : 0

 Invalid number of nodes...


 The Linked List is Empty...

Total Number Of Nodes Is 0 ! 

The Choices Are as follows :
1 : Create Singly Linked List 
2 : Display Created Singly Linked List 
3 : Insert an Element into Linked List
4 : Delete an Element by Position 
5 : Delete An Element By Value 
6 : Reverse 
7 : Search For an Element In Linked List 
8 : Exit 

Enter The Operation to Perform : 1

Enter Number Of Nodes To Insert : 4

Enter Data To Insert In Node 1 : 11

Enter Data To Insert In Node 2 : 22

Enter Data To Insert In Node 3 : 33

Enter Data To Insert In Node 4 : 44


Start-->11-->22-->33-->44-->NULL

Total Number Of Nodes Is 4 ! 

The Choices Are as follows :
1 : Create Singly Linked List 
2 : Display Created Singly Linked List 
3 : Insert an Element into Linked List
4 : Delete an Element by Position 
5 : Delete An Element By Value 
6 : Reverse 
7 : Search For an Element In Linked List 
8 : Exit 

Enter The Operation to Perform : 2
Start-->11-->22-->33-->44-->NULL


Start-->11-->22-->33-->44-->NULL

Total Number Of Nodes Is 4 ! 

The Choices Are as follows :
1 : Create Singly Linked List 
2 : Display Created Singly Linked List 
3 : Insert an Element into Linked List
4 : Delete an Element by Position 
5 : Delete An Element By Value 
6 : Reverse 
7 : Search For an Element In Linked List 
8 : Exit 

Enter The Operation to Perform : 3

Enter Position To Insert Node In Singly Linked List : 5

Enter Data TO Insert In Node 5 : 55


Start-->11-->22-->33-->44-->55-->NULL

Total Number Of Nodes Is 5 ! 

The Choices Are as follows :
1 : Create Singly Linked List 
2 : Display Created Singly Linked List 
3 : Insert an Element into Linked List
4 : Delete an Element by Position 
5 : Delete An Element By Value 
6 : Reverse 
7 : Search For an Element In Linked List 
8 : Exit 

Enter The Operation to Perform : 3

Enter Position To Insert Node In Singly Linked List : 0

Enter A Valid Position ! 

Start-->11-->22-->33-->44-->55-->NULL

Total Number Of Nodes Is 5 ! 

The Choices Are as follows :
1 : Create Singly Linked List 
2 : Display Created Singly Linked List 
3 : Insert an Element into Linked List
4 : Delete an Element by Position 
5 : Delete An Element By Value 
6 : Reverse 
7 : Search For an Element In Linked List 
8 : Exit 

Enter The Operation to Perform : 4

Enter Position Of Node To Delete From Singly Linked List : 3

 Node Deleted Successfully ! 


Start-->11-->22-->44-->55-->NULL

Total Number Of Nodes Is 4 ! 

The Choices Are as follows :
1 : Create Singly Linked List 
2 : Display Created Singly Linked List 
3 : Insert an Element into Linked List
4 : Delete an Element by Position 
5 : Delete An Element By Value 
6 : Reverse 
7 : Search For an Element In Linked List 
8 : Exit 

Enter The Operation to Perform : 4

Enter Position Of Node To Delete From Singly Linked List : 7

Enter A Valid Position ! 

Start-->11-->22-->44-->55-->NULL

Total Number Of Nodes Is 4 ! 

The Choices Are as follows :
1 : Create Singly Linked List 
2 : Display Created Singly Linked List 
3 : Insert an Element into Linked List
4 : Delete an Element by Position 
5 : Delete An Element By Value 
6 : Reverse 
7 : Search For an Element In Linked List 
8 : Exit 

Enter The Operation to Perform : 5

Enter Value To Delete From Linked List : 66

 66 Value Not Found... 


Start-->11-->22-->44-->55-->NULL

Total Number Of Nodes Is 4 ! 

The Choices Are as follows :
1 : Create Singly Linked List 
2 : Display Created Singly Linked List 
3 : Insert an Element into Linked List
4 : Delete an Element by Position 
5 : Delete An Element By Value 
6 : Reverse 
7 : Search For an Element In Linked List 
8 : Exit 

Enter The Operation to Perform : 5

Enter Value To Delete From Linked List : 44


Start-->11-->22-->55-->NULL

Total Number Of Nodes Is 3 ! 

The Choices Are as follows :
1 : Create Singly Linked List 
2 : Display Created Singly Linked List 
3 : Insert an Element into Linked List
4 : Delete an Element by Position 
5 : Delete An Element By Value 
6 : Reverse 
7 : Search For an Element In Linked List 
8 : Exit 

Enter The Operation to Perform : 6


Start-->55-->22-->11-->NULL

Total Number Of Nodes Is 3 ! 

The Choices Are as follows :
1 : Create Singly Linked List 
2 : Display Created Singly Linked List 
3 : Insert an Element into Linked List
4 : Delete an Element by Position 
5 : Delete An Element By Value 
6 : Reverse 
7 : Search For an Element In Linked List 
8 : Exit 

Enter The Operation to Perform : 7

Enter Element To Search In Linked List : 87

 87 Value Not Found...

Start-->55-->22-->11-->NULL

Total Number Of Nodes Is 3 ! 

The Choices Are as follows :
1 : Create Singly Linked List 
2 : Display Created Singly Linked List 
3 : Insert an Element into Linked List
4 : Delete an Element by Position 
5 : Delete An Element By Value 
6 : Reverse 
7 : Search For an Element In Linked List 
8 : Exit 

Enter The Operation to Perform : 7

Enter Element To Search In Linked List : 22

Value 22 Found At Position 2 !


Start-->55-->22-->11-->NULL

Total Number Of Nodes Is 3 ! 

The Choices Are as follows :
1 : Create Singly Linked List 
2 : Display Created Singly Linked List 
3 : Insert an Element into Linked List
4 : Delete an Element by Position 
5 : Delete An Element By Value 
6 : Reverse 
7 : Search For an Element In Linked List 
8 : Exit 

Enter The Operation to Perform : 8

---EXIT---


Start-->55-->22-->11-->NULL

Total Number Of Nodes Is 3 !

-----X------
*/
