#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;


    //Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }



    // Destructor
    ~Node(){
        int value = this->data;
        // Memory free
        if(this->next != NULL){
            delete next;
            next =NULL;

        }
        cout<<" memory is free for node with data "<<value<<endl;
    }
};

void InsertAtHead(Node* &head, int d){

    // Create a new node
    Node* temp = new Node(d);
    temp->next = head;
    head= temp;
}



void InsertatTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail  = tail->next;
}



void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    // Insertion at start
    if(position == 1){
        InsertAtHead(head, d);
        return;
    }
    



    Node* temp = head;
    int cnt =1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;

    }
    // Inserting at last Position
    if(temp->next == NULL){
        InsertatTail(tail, d);
        return;
    }

    // Creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp ->next;
    temp->next = nodeToInsert;

}


// Traversing a Linked List
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

}

// Deleting a node
void deleteNode(int position, Node* &head){
    //Deleting start node
    if(position == 1){
        Node* temp = head;
        head = head->next;
        // Memory free start node
        temp->next =NULL; 
        delete temp;
    }
    // Deleting any other node 
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
            

        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;

    }
}


int main()
{
    // Creating a new node
    Node* node1 = new Node(10);
    cout<<node1 -> data<<endl;
    cout<<node1->next<<endl;


    // Head pointed to node1;
    Node *head = node1;
    Node *tail = node1;


    print(head);
    InsertatTail(tail, 12);
    print(head);
    InsertatTail(tail, 15);
    print(head);
    // print(head);
    // InsertAtHead(head, 12);
    // print(head);
    // InsertAtHead(head, 15);
    // print(head);
    insertAtPosition(tail, head, 4, 22);
    print(head);


    cout<<"Head "<<head->data<<endl;

    cout<<"Tail "<<tail->data<<endl;

    deleteNode(4,head);
    print(head);
    return 0;
}