#include<iostream>
using namespace std;

struct link{
    int data;
    struct link* next;
};

struct link* start = NULL;
struct link* node;
struct link* current;

void insertAthead(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        node = (struct link*)malloc(sizeof(struct link));
        cin >> node->data;
        node->next = NULL;
        if(start == NULL){
            start = node;
            current = node;
        }
        else{
            node->next = start; // Change this line to insert at the head
            start = node;
        }
    }
}

void insertAtTail(int data){ // Add a new function to insert at the tail
    node = (struct link*)malloc(sizeof(struct link));
    node->data = data;
    node->next = NULL;
    if(start == NULL){
        start = node;
        current = node;
    }
    else{
        current->next = node;
        current = node;
    }
}

void print(){
    struct link* temp = start; // Start from the beginning of the list
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    insertAthead();
    cout << "Created Linked list: ";
    print();
    
    int newData;
    cin >> newData;
    insertAtTail(newData);
    
    cout << endl;
    cout << "Final list: ";
    print();
    
    return 0;
}
