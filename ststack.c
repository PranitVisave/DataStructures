
#include"stfunc.h"
void main()
{
     printf("\nStatic Stack Implementation \n");
     init();
     while (op>=1 && op<=6)
     {
           printf("\nOperations To Perform On Stack  ");
           printf("\n\t1 : Push Element On Stack  ");
           printf("\n\t2 : Pop Element From Stack  ");
           printf("\n\t3 : Peek Top Elementr Of Stack ");
           printf("\n\t4 : Check If Stack Is Empty ");
           printf("\n\t5 : Check If Stack Is Full ");
           printf("\n\t6 : Exit ");
           printf("\n\nEnter Operation To Perform On Stack : ");
           scanf("%d",&op);
           switch(op)
           {
                 case 1: 
                       push();
                       break;
                 case 2:
                       if (top==-1)
                          printf("\nStack Underflow Occured...\n");
                       else
                          pop();
                       break;
                 case 3: 
                       if (top==-1)
                           printf("\nStack Is Empty...\n");
                       else
                           peek();
                       break;
                 case 4: 
                       isempty();
                       break;
                 case 5: 
                       isfull();
                       break;
                 case 6:
                       printf("\nEXIT\n");
                       exit(0);
                      
                 default :
                       printf("\nEnter A Valid Operation...\n");
                       break;
           }
           if (top!=-1)
           {
              printf("\nThe Stack Is : \n");
              printf("\nTOP:");
              for (i=top;i>=0;i--)
                  printf("-->%d",stack[i]);
           }
      }
}
