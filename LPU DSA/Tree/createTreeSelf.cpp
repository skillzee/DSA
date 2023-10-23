#include<iostream>
using namespace std;

struct Node{
    char data;
    Node* left;
    Node* right;
};


Node* create(){
    char val;
    cout<<"Enter the element: (Press X for no element)"<<endl;
    cin>>val;
    if(val == 'X'){
        return NULL;
    }
    Node* newNode = new Node;
    newNode->data = val;
    cout<<"Enter left of "<<val<<":";
    newNode->left = create();
    cout<<"Enter right of "<<val<<":";
    newNode->right = create();



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
    cout<<"Tree created successfully";
    cout<<"The inorder traversal is: ";
    display(root);
    
     
    return 0;
}