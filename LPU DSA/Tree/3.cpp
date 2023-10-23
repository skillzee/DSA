// Binary search tree --> Left Element should be less than right and right shoiuld be greater than root

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *right;
    Node *left;
};

Node* create(int a){
    Node* newNode = new Node;
    newNode->data = a;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;

}

Node *insert(Node *root, int a)
{
    if(root==NULL){
        return create(a);
    }
    if(a<root->data){
        root->left = insert(root->left,a);
    }
    else if(a>root->data){
        root->right = insert(root->right, a);
    }
    
    return root;
}

void display(Node* root){
    if(root == NULL){
        return;
    }
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);


}

int main()
{
    Node *root = NULL;
    root = insert(root, 9);
    insert(root, 5);
    insert(root, 18);
    insert(root, 12);
    insert(root, 6);
    insert(root, 4);
    insert(root, 14);
    insert(root, 10);
    insert(root, 8);
    insert(root, 11);

    cout<<"Binary Search Tree Created Successfully! "<<endl;
    cout<<"Inorder Traversal is: ";
    display(root);

    return 0;
}