#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};


void preorder(Node * node){
    if(node == NULL){
        return;
    }
    cout<<(node->data)<<" ";
    preorder(node->left);
    preorder(node->right);
}

void inorder(Node* node){
    if(node == NULL){
        return;
    }

    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}

void postorder(Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;

     
    return 0;
}