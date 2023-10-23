// WAP to create a BST and delete a node


#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    
};

Node* create(int item){
    Node* newnode = new Node;
    newnode->data = item;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}

Node* insert(Node* root, int item){
    if(root == NULL){
        return create(item);
    }

    if(item<root->data){
        root->left = insert(root->left, item);
    }

    else if(item>root->data){
        root->right = insert(root->right,item);
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
            int min = minval(root->right) ->data;
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

    Node* root = NULL;
    root = insert(root, 14);
    root = insert(root, 7);
    root = insert(root, 27);
    root = insert(root, 13);
    root = insert(root, 25);
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 3);
    root = insert(root, 5);
    root = insert(root, 19);
    cout<<"BST created successfully"<<endl;
    cout<<"In-order traversal is: "<<endl;
    display(root);
    cout<<endl;

    cout<<"Enter the number you want to delete: ";
    int n;
    cin>>n;
    root = delete1(root, n);
    cout<<"The updated inorder traversal is: ";
    display(root);

     
    return 0;
}