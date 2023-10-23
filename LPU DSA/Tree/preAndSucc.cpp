#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* create(int item){
    Node* newNode = new Node;
    newNode->data = item;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insert(Node* root, int item){
    if(root == NULL){
        return create(item);
    }

    
}

int main()
{
    Node* root = NULL;
    root = insert(root ,9);
     
    return 0;
}