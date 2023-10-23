#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }
    // Node(int d):data(d),next(NULL){}
};

void insertAthead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next =head;
    head = temp;
}





void print(Node * &head){
    Node * temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{

    // Node* node1 = new Node(10);
    Node* head =NULL;
    cout<<"enter the nodes you wnat to create: ";
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        int data;
        cout<<"enter the data element: ";
        cin>>data; 
        insertAthead(head, data);
    }

    print(head);
     
    return 0;
}