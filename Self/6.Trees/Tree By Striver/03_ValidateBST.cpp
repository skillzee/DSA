// You are using GCC
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/* A binary tree node has data, pointer to left child
   and a pointer to the right child */
struct node {
    int val;
    struct node* left;
    struct node* right;
};

bool isValidBST(node* root, long maxval, long minval){
    if(root == NULL){
        return true;
    }
    if(root->val>=maxval || root->val<=minval){
        return false;
    }
    return isValidBST(root->left, root->val, minval) && isValidBST(root->right, maxval, root->val);
}

/* Function to check if the given tree is a binary search tree */
int isBST(struct node* node) {
    
    return isValidBST(node, INT_MAX, INT_MIN);
    
}

/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct node* newNode(int data) {
    struct node* node
        = (struct node*)malloc(sizeof(struct node));
    node->val = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

/* Function to build a binary tree from user input */
struct node* buildTree() {
    int data;
    struct node* root = NULL;

    scanf("%d", &data);

    if (data == -1)
        return NULL;

    root = newNode(data);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}

int main() {
    struct node* root = buildTree();

    if (isBST(root))
        printf("The given binary tree is a BST\n");
    else
        printf("The given binary tree is not a BST\n");

    return 0;
}