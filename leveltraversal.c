#include<stdio.h>
#include<stdlib.h>
typedef struct node
{ 
        int data;
        struct node *left;
        struct node *right;
}node;
node *root,*temp,*t,*t1;
int n,val,i,nodes=0,leafnodes=0;
void init()
{
     root=NULL;
}
node* create(node *root,int n)
{
     
     for (i=1;i<=n;i++)
     {
         temp=malloc(sizeof(node));
         temp->left=temp->right=NULL;
         printf("\nEnter Element to Insert in BST : ");
         scanf("%d",&temp->data); 
         if (i==1)
            root=t=temp;
         else
         {
            t=root;
            while (t!=NULL)
            {
                  t1=t;
                  if (temp->data < t->data)
                     t=t->left;
                  else
                     t=t->right;
            }
            if (temp->data == t1->data)
               printf("\nElement %d Already Exists In BST...",temp->data);
            else
               if (temp->data < t1->data)
                  t1->left=temp;
               else
                  t1->right=temp;
         }
     }
     printf("\nBinary Search Tree Created Successfully !");
     return root;
}
node* insert(node *root,int val)
{
      temp=malloc(sizeof(node));
      temp->left=temp->right=NULL;
      temp->data=val;
      if (root==NULL)
         root=t=temp;
      else
      {
         t=root;
         while (t!=NULL)
         {
               t1=t;
               if (temp->data < t->data)
                  t=t->left;
               else
                  t=t->right;
         }
         if (temp->data == t1->data)
            printf("\nElement %d Already Exists In BST...",temp->data);
         else
            if (temp->data < t1->data)
               t1->left=temp;
            else
               t1->right=temp;
     }
     printf("\nELement %d Inserted In Binary Search Tree Successfully !",val);
     return root;
}  
void inorder(node *root)
{
     if (root!=NULL)
     {
        inorder(root->left);
        printf(" %d ",root->data);
        inorder(root->right);
     }
}
void preorder(node *root)
{
     if (root!=NULL)
     {
        printf(" %d ",root->data);
        preorder(root->left);
        preorder(root->right);
     }
}
void postorder(node *root)
{
     if (root!=NULL)
     {
        postorder(root->left);
        postorder(root->right);
        printf(" %d ",root->data);
     }
}

int cnttotal(node *root)
{
    if (root == NULL)
       return 0;
    return 1 + cnttotal(root->left) + (cnttotal(root->right));
}
int cntleafnodes(node *root)
{
    if (root == NULL)
       return 0;
    if (root->left==NULL && root->right==NULL)
       return 1;
    return cntleafnodes(root->left) + cntleafnodes(root->right);    
}
void traverse(node *root)
{
     if (root == NULL)
        return;
     node *queue[15];
     int front=0,rear=0,level=0,cur=1,cnt=0,next=0;
     printf("\nLEVEL : %d : ",level);
     queue[rear++]=root;
     while (front!=rear)
     {
           node *temp=queue[front++];
           cur--;
           printf(" %d ",temp->data);
           cnt++;
           if (temp->left!=NULL)
           {
              queue[rear++]=temp->left;
              next++;
           }
           if (temp->right!=NULL)
           {
              queue[rear++]=temp->right;
              next++;
           }
           if (cur == 0)
           {
              printf("--Total Nodes : %d--\n",cnt);
              level++;
              cur=next;
              next=cnt=0;
              if (cur > 0)
                 printf("LEVEL : %d : ",level);
           }
      }
      printf("\nTotal Levels In Binary Search Tree : %d \n",level);
}
void main()
{
     int pos,ch=1,val,nodes,leafnodes;
     init();
     while (ch>=1 && ch<=4)
     {
           printf("\nOpeartions To Perform On Binary Search Tree :\n");
           printf("1 : Create Binary Search Tree \n");
   	   printf("2 : Insert an Element into Binary Search Tree \n");
     	   printf("3 : Traverse Binary Search Tree \n");
     	   printf("4 : Exit \n");     
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
                        printf("\nEnter Element To Insert In Binary Search Tree : ");
                        scanf("%d",&val);
                        root=insert(root,val);
                        break;
                  case 3:
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
                           printf("\nLevel Order Traversal Of Binary Search Tree And Count Of Nodes On Each Level : \n");
                           traverse(root);
                        }
                        break;
                  case 4:
                        printf("\n----EXIT----\n");
                        exit(0);
                  default:
                        printf("\nEnter A Valid Operation...\n");
                        break;
                }
          }
}












