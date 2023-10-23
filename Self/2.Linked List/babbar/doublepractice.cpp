#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    

    Node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(Node * & head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void getLength(Node* &head){
    Node* temp = head;
    int cnt =0;
    while(temp!= NULL){
        cnt++;
        temp = temp->next;
    }
    cout<<cnt;

}

void insertAtHead(Node* &tail, Node* & head, int d){

    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
    Node * temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
}

void insertAtTail(Node* &tail, Node* & head, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
    Node* temp = new Node(d);
    temp->prev = tail;
    tail->next = temp;
    
    tail = temp;
    
}
}

void insertAtpos(Node* &tail, Node* &head,int pos, int d){
    Node* temp = head;
    int cnt =1;
    if(pos ==1){
        insertAtHead(tail,head, d);
        return;
    }

    while (cnt<pos-1)
    {
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        insertAtTail(tail,head, d);
        return;
    }


    Node* nodetoinsert  =new Node(d);
    nodetoinsert->next = temp->next;
    temp->next->prev= nodetoinsert->next;
    temp->next = nodetoinsert;
    nodetoinsert->prev= temp;
    
}


void delete1(Node* & tail, Node* &head, int pos){
    if(pos == 1){
        Node* temp = head;
        head = temp->next;
        temp->next->prev = NULL;
        temp->next = NULL;
        delete temp;

    }
    else{
        Node* current = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt<pos){
            prev = current;
            current= current->next;
            cnt++;
        }
        if(current->next == NULL){
            prev->next = NULL;
            tail = prev;
            // return;
        }
        current->prev = NULL;
        prev->next = current->next;
        // current->next->prev = prev->next;
        current->next = NULL;
        delete current;
    }
} 

int main()
{
    // Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;
    print(head);
    cout<<endl;
    getLength(head); 
    insertAtHead(tail, head, 5);
    cout<<endl;
    print(head);
    insertAtHead(tail, head, 1);
    cout<<endl;
    print(head);
    insertAtTail(tail,head,  15);
    cout<<endl;
    print(head);

    insertAtpos(tail, head, 2, 67);
    cout<<endl;
    print(head);
    cout<<endl;
    insertAtpos(tail, head, 5, 69);
    cout<<endl;
    print(head);
    cout<<endl;





    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    delete1(tail,head, 5);
    print(head);
    cout<<endl;
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    return 0;
}