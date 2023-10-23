///wap to create a double circular LL and display all the elements
#include <iostream>
using namespace std;

struct link{
    int data;
    struct link *next;
    struct link *prev;
};
struct link *start=NULL;
struct link *current;
struct link *node;

int n;

void create(){
    cout<<"How many nodes you want to create: ";
    cin>>n;
    cout<<"Enter all elements: "<<endl;

    for(int i=0;i<n;i++){
        node=(struct link *)malloc(sizeof(struct link));
        cin>>node->data;
        if(start==NULL){
            start=node;
            current=node;
            node->next=start;
            node->prev=start;
        }
        else{
            current->next=node;
            node->prev=current;
            node->next=start;
            start->prev=node;
            current=node;
        }
    }
}

void display(){
    struct link *ptr=start;
    do{
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    while(ptr!=start);
}

int main(){

create();
display();

return 0;
}