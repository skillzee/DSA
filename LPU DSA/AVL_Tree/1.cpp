// WAP to create one AVL tree and display the inorder traversal
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    int height;
};



Node* create(int item){
    Node* newNode = new Node;
    newNode->data = item;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->height = 1;
    return newNode;
}

int findheight(Node* root){
    if(root = NULL){
        return 0;
    }
    int left = findheight(root->left);
    int right = findheight(root->left);
    if(left<right){
        return right+1;

    }
    else if(left>right){
        return left+1;
    }

}

Node* leftRotation(Node* x){
    Node* y = x->right;
    Node* R1 = y->left;

    y->left =x;
    y->right = R1;

    x->height = findheight(x); 
    y->height = findheight(y); 
    return y;
}

Node* rightRotation(Node* y){
    Node* x= y->left;
    Node* T2 = x->right;



    x->right = y;
    y->left = T2;
    x->height = findheight(x); 
    y->height = findheight(y); 
    return x;
}

int getbalance(Node* root){
    if(root ==NULL){
        return 0;
    }
    return findheight(root->left) - findheight(root->right);
}

Node* insert(Node* root, int item){
    if(root == NULL){
        return create(item);

    if(item<root->data){
        root->left = insert(root->left, item);
    }
    else if(item>root->data){
        root->right = insert(root->right, item);

    }
    else{
        return root;
    }

    root->height = findheight(root);

    int bf  = getbalance(root);

    //Left-Left Case
    if(bf>1 and item<root->left->data){
        return rightRotation(root);
    }


    // Right-Right Case
    else if(bf<-1 and item>root->right->data){
        return leftRotation(root);
    }

    // Left-Right Case
    else if(bf>1 and item>root->left->data){
        root ->left = leftRotation(root->left);
        return rightRotation(root);
    }

    // Right-Left Case
    else if(bf<-1 and item<root->right->data){
        root->right = rightRotation(root->right);
        return leftRotation(root);
    }

}
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
    cout<<"Enter the number of nodes you want to create:";
    int n;
    cin>>n;
    int a[n];
    
    cout<<"Enter all Elements of the AVL Tree: ";
    // int one;
    // cin>>one;
    // a[0] = one;
    // root = insert(root, one);
    for(int i =0; i<n; i++){
        cin>>a[i];
        insert(root, a[i]);
    }
    cout<<"AVL Tree Created successfully "<<endl;
    cout<<"The inorder traversal is: ";
    display(root);
     
    return 0;
}