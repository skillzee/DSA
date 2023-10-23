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


void insert(Node* & tail, int element, int d ){



    // If the LL is empty

    if(tail == NULL){
        Node * newnode = new Node(d);
        tail = newnode;
        newnode->next = newnode;
    }
    // Assuming that the element is present

    else{
        Node* current = tail;
        while(current->data != element){
            current = current->next; //element found and current is pointing on that elemnt 
        }
        Node* temp =new Node(d);
        temp->next = current->next;
        current->next = temp;

    }






}
    void print(Node* &tail){
        Node * temp = tail;

        do{
            cout<<tail->data<<" ";
            temp = tail->next;
        }
        while(tail!= temp);
        cout<<endl;
    }
int main()
{


    // Node* node1 = new Node(10);
    Node* tail = NULL;
    insert(tail, 5 ,3);
    print(tail);
     
    return 0;
}