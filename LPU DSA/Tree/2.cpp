// WAP to create one binary tree with the help of recursion and print the inorder traversal of that binary tree

#include<iostream>
using namespace std;

struct Node{
    char data;
    Node* left;
    Node* right;
};


Node* create(){
    char val;
    cout<<"Enter the Element(or 'X' for no element)";
    cin>>val;
    if(val == 'X'){
        return NULL;
    }
    Node* newnode= new Node;
    newnode->data = val;
    cout<<"Enter the left child of "<<val<<" ";
    newnode->left = create();
    cout<<"Enter the right child of "<<val<<" ";
    newnode->right = create();
    return newnode;
    

    

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

    
    Node* root = NULL;
    root = create();
    cout<<"Binary tree craeted successfully"<<endl;
    cout<<"The inorder traversal is: ";
    display(root);
     
    return 0;
}