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
    newNode->right = NULL;
    newNode->left = NULL;
    return newNode;
}

Node* Insert(Node* root, int data){
    if(root == NULL){
        return create(data);
    }

    if(data<root->data){
        root->left = Insert(root->left, data);
    }
    if(data>root->data){
        root->right = Insert(root->right, data);
    }
    return root;
}

Node* minval(Node* root){
    Node* temp = root;
    while(temp->left!=NULL){
        temp = temp->left;
    }
    return temp;
}

Node* delete1(Node* root, int val){
    // Base Case
    if(root==NULL){
        return root;
    }
    if(root->data == val){
        // 0 child
        if(root->left == NULL and root->right == NULL){
            delete root;
            return NULL;
        }
        

        // 1 child -->left Child
        if(root->left !=NULL and root->right == NULL){
            Node* temp =root->left;
            delete root;
            return temp;
        }
        // 1 child -->right Child
        if(root->left ==NULL and root->right != NULL){
            Node* temp =root->right;
            delete root;
            return temp;
        }
        


        // 2 child
        if(root->left!=NULL and root->right!=NULL){
            int min = minval(root->right)->data;
            root->data = min;
            root->right = delete1(root->right, min);
            return root;
        }

    }

    else if(root->data>val){
        root->left =  delete1(root->left, val);
        return root;

    }
    else{
        root->right = delete1(root->right, val);
        return root;
    }


}


int main()
{
     
    return 0;
}