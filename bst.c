#include"bstheader.h"
void main(void)
{ 
     int pos,ch=1,val,nodes,leafnodes;
     init();
     while (ch>=1 && ch<=8)
     {
           printf("\nOpeartions To Perform On Binary Search Tree :\n");
           printf("1 : Create Binary Search Tree \n");
     	   printf("2 : Search for an Element in Binary Search Tree \n");
   	   printf("3 : Insert an Element into Binary Search Tree \n");
     	   printf("4 : Traverse Binary Search Tree \n");
     	   printf("5 : Count Total Nodes in Binary Search Tree \n");
     	   printf("6 : Count Leaf Nodes in Binary Search Tree \n");
     	   printf("7 : Delete an Element in Binary Search Tree \n");
     	   printf("8 : Exit \n");     
     	   printf("\nEnter The Operation to Perform : ");
           scanf("%d",&ch);
           switch (ch)
           {
                  case 1:
                         if (root!=NULL)
                            printf("\nBinary Search Tree  Already Exists ! ");
                         else
                         {
                            printf("\nEnter Number Of Nodes To Insert in Binary Search Tree : ");
                            scanf("%d",&n);      
                            if (n<=0)
                               printf("\n Invalid number of nodes...");  
                            else
                               root=create(root,n); 
                         }      
                         break;
                  case 2:
                         if (root==NULL)
                            printf("The Binary Search Tree Does Not Exist ! ");
                         else 
                         {
                            printf("\nEnter ELement To Search In Binary Search Tree : ");
                            scanf("%d",&val);
                            if (search(root,val)!=NULL)
                               printf("\nElelemnt %d Exists in BST...",val);
                            else
                               printf("\nElement %d Does Not Exist In BST...\n",val);
                         /*   if (temp==NULL)
                               printf("\nElement %d Does Not Exist in Binary Search Tree...\n",temp->data);
                            else
                               printf("\nElement %d Exists In Binary Search Tree \n",temp->data);
                           */    
                         }
                         break;
                 case 3: 
                        printf("\nEnter Element To Insert In Binary Search Tree : ");
                        scanf("%d",&val);
                        root=insert(root,val);
                        break;
                 case 4:
                        if (root==NULL)
                           printf("\nBinary Search Tree in not Created ! ");
                        else
                        {
                           printf("\nInOrder Traversal Of Binary Search Tree : \n");
                           inorder(root);
                           printf("\nPreOrder Traversal Of Binary Search Tree : \n");
                           preorder(root);
                           printf("\nPostOrder Traversal Of Binary Search Tree : \n");
                           postorder(root);
                        }
                        break;
                 case 5:
                         if (root==NULL)
                            printf("\nBinary Search Tree in not Created ! ");
                         else
                         {
                            nodes=cnttotal(root);
                            printf("\nTotal Number Of Nodes in Binary Search Tree is %d.",nodes);
                         }
                         break;
                    
                  case 6:
                        if (root==NULL)
                            printf("\nBinary Search Tree in not Created ! ");
                        else
                        {
                            leafnodes=cntleafnodes(root);
                            printf("\nTotal Number Of Leaf Nodes in Binary Search Tree is %d.",leafnodes);
                        }
                        break;
                   
                  case 7:
                        if (root==NULL)
                            printf("\nBinary Search Tree in not Created ! ");
                        else
                        {
                            printf("\nEnter Element to Delete From Binary Search Tree : ");
                            scanf("%d",&val);
                            s=search(root,val);
                            if (s->data==val)
                               root=deletebst(root,val);
                            else 
                               printf("\nElement %d Does Not Exist In BST...\n");
                        }
                        break;
                 
                  case 8:
                        printf("\n---EXIT---\n");
                        exit(0);
                  default:
                        printf("\nEnter a Valid Choice ! ");
                        break; 
             }
        }  
}

