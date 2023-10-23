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

Node *lca(Node *root, int v1,int v2) {
		if(root == NULL){
            return NULL;
        }
        int curr = root->data;
        if(curr<v1 && curr<v2){
            return lca(root->right, v1, v2);
        }
        if(curr>v1 && curr>v2){
            return lca(root->left, v1, v2);
        }
        return root;
    }

int main()
{

     
    return 0;
}