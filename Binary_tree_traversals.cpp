#include<bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
void preorder(Node* root)
{ 
    if(root==NULL)
    return ;
   //NLR 
   cout<<root->data;
   preorder(root->left);
   preorder(root->right);
}

 void postorder(Node * root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}
void Inorder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    Inorder(root->left);
    cout<<root->data;
    Inorder(root->right);
}

    /*       1
            /  \
           2     3
         /  \   / \
        4    5  6   7  */  
void create()
{
        struct Node * root=new Node(1);  
        root->left=new Node(2);
        root-> right=new Node (3);
        root ->left->left= new Node (4);
        root->left->right=new Node (5);
         root ->right->left= new Node (6);
        root->right->right=new Node (7);
        Inorder(root);
        cout<<"\n";
        preorder(root);
          cout<<"\n";
          postorder(root);
}

int main()
{
      create();

    
                             
}