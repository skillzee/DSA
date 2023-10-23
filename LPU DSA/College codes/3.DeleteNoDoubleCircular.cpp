///wap to create a double circular LL and display all the elements
#include <iostream>
using namespace std;
int loc;
int n;
struct link{
    int data;
    struct link *next;
    struct link *prev;
};
struct link *start=NULL;
struct link *current;
struct link *node;


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
void delete1()
{   

    struct link*ptr = start;
    current = ptr->next;
    cout<<"Enter the location : ";
    cin>>loc;
    if(loc==1){
        start=current;
        start->prev=node;
        node->next = start;
    }
    else if(loc>n || loc<1){
        cout<<"Invalid location !"<<endl;
        exit(0);
    }
    else{
        for(int i=0;i<loc-2;i++){
        ptr = ptr->next;
        current=current->next;
        }

    }
    
    ptr->next = current->next;
    current->next->prev=ptr;
    
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
delete1();
display();

return 0;
}