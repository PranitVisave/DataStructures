#include"dyfunc.h"
void main()
{
     int op=1,val,i;
     printf("\nDynamic Implementation Of Stack ");
     init();
     while (op>=1 && op<=5)
     {
           printf("\nOperations To Perform On Stack  ");
           printf("\n\t1 : Push Element Onto Stack  ");
           printf("\n\t2 : Pop Element From Stack  ");
           printf("\n\t3 : Peek Top Elementr Of Stack ");
           printf("\n\t4 : Check If Stack Is Empty ");
           printf("\n\t5 : Exit ");
           printf("\n\nEnter Operation To Perform On Stack : ");
           scanf("%d",&op);
           switch(op)
           {
                 case 1:                    
                       printf("\nEnter ELement To Push Onto The Stack : ");
                       scanf("%d",&val);
                       push(val);
                       break;
                 case 2:
                       if (top==NULL)
                          printf("\nStack Underflow Occured...\n");
                       else
                          printf("\nThe Popped ELement Is %d.\n",pop()); 
                       break;
                 case 3: 
                       if (top==NULL)
                           printf("\nStack Is Empty...\n");
                       else
                           peek();
                       break;
                 case 4: 
                       isempty();
                       break; 
                      
                 case 5:
                       printf("\nEXIT\n");
                       exit(0);
                       break;
                 default :
                       printf("\nEnter A Valid Operation...\n");
           }
           if (top!=NULL)
           {
              printf("\nThe Stack Is : \n");
              printf("\nTOP:");
              for (temp=top;temp->next!=NULL;temp=temp->next)
                  printf("-->%d",temp->data);
              printf("-->%d",temp->data);
           }
     }
}

