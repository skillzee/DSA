// WAP to create the binary tree


#include<iostream>
using namespace std;

struct Node{
    char val;
    Node* left;
    Node* right;
};

Node* createNode(char data){
    Node* node = new Node;
    node->val = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}


void inorder(Node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}


void preorder(Node* root){
    if(root == NULL){
        return;
    }

    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root){
    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}






int main()
{

    Node* root = createNode('A');
    root->left = createNode('B');
    root->left->left = createNode('D');
    root->right = createNode('C');
    root->right->left = createNode('E');
    root->right->left->left = createNode('G');
    root->right->right = createNode('F');
    cout<<"Binary Tree Created Successfully"<<endl;
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);


    return 0;
}