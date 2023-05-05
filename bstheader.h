#include<stdio.h>
#include<stdlib.h>
typedef struct node
{ 
        int data;
        struct node *left;
        struct node *right;
}node;
node *root,*temp,*t,*t1,*s;
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
     printf("\nBinary Search Tree Created Successfully !\n");
     return root;
}
node* search(node *root,int val)
{
      if (root == NULL || root->data == val)
         return root;
      else if (val < root->data)
         return search(root->left,val);
      else
         return search(root->right,val);
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
node *deletebst(node *root, int key)
{
     node *temp;
     if (root == NULL)
        return root;
     if (key < root->data)
        root->left=deletebst(root->left, key);
     else if (key > root->data)
        root->right=deletebst(root->right, key);
     else //if (key == search(root,key))
     {
        if (root->left == NULL)
        {
           temp=root->right;
           free(temp);
           return temp;
        }
        else if (root->right == NULL)
        {
           temp=root->left;
           free(root);
           return temp;
        }
        temp=root->right;
        while (temp && temp->left!=NULL)
              temp=temp->left;
        root->data=temp->data;
        root->right=deletebst(root->right, temp->data);
    }
   // else //
    //if (temp==NULL)
    //    printf("\nElement %d Does Not Exist In BST...\n",key);
    return root;
}
/*
node *deletebst(node *root, int val)
{
     if (val < root->data)
        root->left=deletebst(root->left,val);
     else if (val > root->data)
        root->right=deletebst(root->right,val);
     else if (root->data == val)
     {
        if (root->left!=NULL && root->right!=NULL)
        {
           temp=root->right;
           while (temp->left)
                 temp=temp->left;
           root->data=temp->data;
           root->right=deletebst(root->right, temp->data);
        }
        else
        {
            t=root;
            if (t->left!=NULL)
               t=t->left;
            else if (t->right!=NULL)
               t=t->right;
            else 
               t=NULL;
            free(t);
            printf("\nElement %d Deleted From BST Successfully !",val);
        }
     }
     else
        printf("Element %d Does Not Exist in Binary Search Tree...\n");
     return root;
}

*/




