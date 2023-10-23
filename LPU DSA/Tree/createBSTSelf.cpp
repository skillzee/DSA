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
    newNode->right =NULL;
    return newNode;
    
}

Node* insert(Node* root, int item){
    if(root == NULL){
        return create(item);
    }
    
    if(item<root->data){
        root->left = insert(root->left, item);
    }
    else if(item>root->data){
        root->right = insert(root->right, item);
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


bool search(Node* root, int item){
    if(root == NULL){
        return false;
    }
    else if(root->data == item){
        return true;
    }

    if (item<root->data){
        return search(root->left, item);
    }
    if(item >root->data){
        return search(root->right, item);
    }
    // return true;
}

int main()
{
    Node* root = NULL;
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

    cout<<"BST created successfull"<<endl;
    cout<<"The inorder traversal of the given BST is: ";
    display(root);
    int no = 69;
    cout<<endl;
    cout<<search(root, no)<<endl;
    
     
    return 0;
}