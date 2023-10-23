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

class Queue{
    Node* head;
    Node* tail;
    int size;

public:
    Queue(){
        this->head = NULL;
        this->tail = NULL;
        this->size = 0;
    }

    void enque(int data){
        Node* newNode = new Node(data);
        if(this->head == NULL){
            //LL is empty
            this->head = this->tail =newNode;
        }
        else{
            this->tail->next = newNode;
            this->tail = newNode;
        }
        this->size++;
    }

    void dequeue(){
        if(this->head == NULL){
            //LL is empty
            return;
        }
        else{
            Node* oldHead = head;
            Node* newHead = head->next;
            head = newHead;
            if(head == NULL) tail == NULL;
            oldHead->next = NULL;
            delete oldHead;
            size--;
        }
    }


    int getSize(){
        return size;
    }

    bool isEmpty(){
        return head == NULL;
    }

    int getFront(){
        if(head == NULL) return -1;
        return head->data;
    }



};

int main()
{

    Queue qu;
    qu.enque(10);
    qu.enque(20);
    qu.enque(30);
    qu.dequeue();
    qu.enque(40);

    while(! qu.isEmpty()){
        cout<<qu.getFront()<<" ";
        qu.dequeue();
    }
     
    return 0;
}