// WAP to create a double linked list and display all elements
#include<iostream>
using namespace std;
struct link{
    int data;
    struct link *prev;
    struct link *next;
};

struct link *start = NULL;
struct link *node;
struct link *current;

void create(){
    int n;
    cout<<"How many nodes you want to create: ";
    cin>>n;
    cout<<"Enter all the elements: ";
    for(int i =0 ; i<n; i++){
        node = (struct link *)malloc(sizeof(struct link));
        cin>>node->data;
        node->prev = NULL;
        node->next = NULL;

        if(start == NULL){
            start = node;
            current = node;
        }
        else{
            current->next = node;
            node->prev = current;
            current = node;
        }


    }
}

void display(){
    struct link *ptr  = start;
    while (ptr != NULL)
    {
        cout<<ptr->data;
        ptr = ptr->next;
    }
    


};



int main()
{
    create();
    display();
     
    return 0;
}