// WAP to create one binary tree with the help of recursion and print the inorder traversal of that binary tree

#include<iostream>
using namespace std;

struct Node{
    char data;
    Node* left;
    Node* right;
};


Node* create(){
    cout<<"Enter the root element: ";
    char val;
    Node* root = new Node;
    cin>>val;
    if(val == 'X'){
        return NULL;
    }
    root->data = val;
    cout<<"Enter R for Right and L for Left: ";
    char charac;
    cin>>charac;
    if(charac == 'R'){
        root->right = create();
    }
    if(charac == 'L'){
        root->left = create();
    }

    

}

int main()
{

    cout<<"Enter X whenever you want to exit"<<endl;
    Node* root = NULL;
    root = create();
     
    return 0;
}