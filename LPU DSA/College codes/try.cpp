#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL; 
    }

};


void insertAtHead(Node* &head, Node* &tail, int d){
    if(head == NULL){
        Node* newNode = new Node(d);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(d);
        newNode->next = head;
        head->prev = newNode;
        head= newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int d){
    if(head == NULL){
        Node* newNode = new Node(d);
        head= newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(d);
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}

void delete1(){

}

void display(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 5);
    insertAtHead(head, tail, 7);
    insertAtTail(head, tail, 9);
    display(head);



     
    return 0;
}