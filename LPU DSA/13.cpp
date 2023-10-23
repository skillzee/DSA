// Write a program to delete a number from double circular LL by asking only the position.
#include<iostream>
using namespace std;

struct Link{
    int data;
    Link* next;
    Link* prev;
};

struct Link* start = NULL;
struct Link* curr;
struct Link* node;

int n;
void create(){
    cout<<"Enter the number of nodes u want to create: ";
    cin>> n;
    cout<<"Enter all Elements: ";
    for(int i = 0; i<n; i++){
        node = (struct Link *)malloc(sizeof(struct Link));
        cin>>node->data;
        if(start == NULL){
            start = node;
            curr = node;
            node->next = start;
            node->prev = start;

        }

        else{
            curr->next = node;
            node->prev = curr;
            node->next = start;
            start->prev = node;
            curr = node;
        }
    }
}


void delete1(){
    int loc;
    struct Link *ptr = start;
    curr = ptr->next;
    cout<<"Enter the location: ";
    cin>>loc;
    if(loc == 1){
        start = curr;
        start->prev = node;
        node->next = start;

        
    }
    else if(loc > n || loc <1){
        cout<<"Invalid location";
        exit(0);

    }
    

    
    else{
        for(int i =1; i<=loc-2; i++){
            ptr = ptr->next;
            curr= curr->next;
        
        }
    ptr->next = curr->next;
    curr->next->prev = ptr;
}
}

void display(){
    struct Link *ptr = start;
    do{
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }while(ptr!=start);
}





int main()
{
    create();
    delete1();
    display();

     
    return 0;
}