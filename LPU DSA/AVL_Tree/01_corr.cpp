/******************************************************************************
AVL Tree
*******************************************************************************/
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
    int height;
};
int findheight(Node* root)
{
    if(root==NULL)
        return 0;
    return root->height;
}
Node* leftRotate(Node* x)
{
    Node* y=x->right;
    Node* R1=y->left;
    
    y->left=x;
    x->right=R1;
    
    x->height = max(findheight(x->left),findheight(x->right)) + 1; 
    y->height = max(findheight(y->left),findheight(y->right)) + 1; 
  
    // Return new root 
    return y; 
}
Node *rightRotate( Node *y) 
{ 
    struct Node *x = y->left; 
    struct Node *T2 = x->right; 
  
    // Perform rotation 
    x->right = y; 
    y->left = T2; 
  
    // Update heights 
    y->height = max(findheight(y->left),findheight(y->right)) + 1; 
    x->height = max(findheight(x->left),findheight(x->right)) + 1; 
  
    // Return new root 
    return x; 
} 
Node* create(int item)
{
    Node* newnode=new Node;
    newnode->data=item;
    newnode->left=NULL;
    newnode->right=NULL;//https://www.onlinegdb.com/#tab-stdin
    newnode->height=1;
    return newnode;
}

int getbalance(Node* root)
{
    if(root==NULL)
        return 0;
    return findheight(root->left)-findheight(root->right);
}
Node* insert(Node* root,int item)
{
    if(root==NULL)
        return create(item);
    if(item < root->data)
        root->left=insert(root->left,item);
    else if(item > root->data)
        root->right=insert(root->right,item);
    else
    return root;
    
    root->height=1 + max(findheight(root->left),findheight(root->right));
    
    int bf=getbalance(root);
    
    //LL case
    if(bf>1 && item<root->left->data)
    {
        return rightRotate(root);
    }
    //RR Case
    else if(bf<-1 && item > root->right->data)
    {
        return leftRotate(root);
    }
    //LR Case
    else if(bf >1 && item>root->left->data)
    {
        root->left=leftRotate(root->left);
        return rightRotate(root);
    }
    else if(bf <-1 && item < root->right->data)
    {
        root->right=rightRotate(root->right);
        return leftRotate(root);
    }
    return root;
}
void display(Node* root)
{
    if(root==NULL)
        return;
    display(root->left);
    cout<<root->data;
    display(root->right);
}
int main()
{
    Node* root=NULL;
    int n;
    cout<<"Enter tghe range:";
    cin>>n;
    int a[n];
    cout<<"\nEnter all the Elements of AVL tree:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        root=insert(root,a[i]);
    }
    cout<<"\nAVL tree Created Successfully: ";
    cout<<"inorder traversal is:";
    display(root);
    return 0;
}