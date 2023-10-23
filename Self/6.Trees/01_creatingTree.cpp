#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};



node* buildtree(node* root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin >>data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for inserting in left: "<<root->data<<endl;

    root->left = buildtree(root->left);
    cout<<"Enter data for inserting in right of: "<<root->data<<endl;
    root->right = buildtree(root->right);

    return root;


}

void buildFromLevelOrder(node* root){
    queue<node*> q;
    cout<<"Enter data for root"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter left node for "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;

        if(leftdata!=-1){
            temp->left = new node(leftdata);
            q.push(temp->left);
        }

        cout<<"Enter right node for "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;

        if(rightdata!=-1){
            temp->right = new node(rightdata);
            q.push(temp->right);
        }

    }

}


void levelOrderTravaersal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){//Purana level traverse ho chuka hai
            cout<<endl;
            if(!q.empty()){ //queue still have some child nodes
                q.push(NULL);
            }
        }
        else{
        cout<<temp->data<<" ";
            if(temp->left){
            q.push(temp->left);
            }
        if(temp->right){
            q.push(temp->right);
            }
        }

        

    }


}

int main()
{
    node* root = NULL;
/*
    // Building a tree
    root = buildtree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // Level order
    cout<<"Level order traversal"<<endl;
    levelOrderTravaersal(root);
  */   



 buildFromLevelOrder(root);
    return 0;
}