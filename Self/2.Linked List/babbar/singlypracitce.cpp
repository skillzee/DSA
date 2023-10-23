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
};

void insertAthead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAttail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp->next = NULL;
    tail = temp;
}


void insertAtPos(Node* &tail,Node* &head, int pos, int d){
    if(pos ==1){
        insertAthead(head, d);
        return;
    }
    Node * temp = head;
    int cnt = 1;
    while(cnt<pos-1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAttail(tail, d);
        return;
    }
    // Creating a node for d
    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}


void print(Node* &head){
    Node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


void delete1(Node* &tail, Node* &head, int pos){
    if(pos==1){
        Node* temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* current = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt<pos){
            prev= current;
            current= current->next;
            cnt++;
        }
        if(current->next == NULL){
            prev->next = NULL;
            delete current;
            tail = prev;
        }
        else{
        prev->next = current->next;
        current->next = NULL;
        delete current;
        }

    }
}
int main()

{
    Node* node1 = new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    Node *head= node1;
    Node* tail = node1;
    insertAthead(head, 15);
    print(head);
    insertAttail(tail, 20);
    insertAttail(tail, 80);
    print(head);

    insertAtPos(tail, head, 2, 5);
    print(head);
    insertAtPos(tail, head, 1, 67);
    print(head);
    insertAtPos(tail, head, 7, 69);
    print(head);

    delete1(tail, head, 7);
    print(head);

    cout<<"Head: "<<(head->data)<<endl;
    cout<<"tail: "<<(tail->data)<<endl;


    return 0;
}