// WAP to insert element in sorted array


#include<iostream>
using namespace std;
struct link{
    int val;
    struct link* next;
};
link* node;
link* start = NULL;
link* current;


int n;
void create(){
    cout<<"How many node you want to create: ";
    cin>>n;
    cout<<"Enter all the elements: ";
    for(int i = 0; i<n;i++){
        node = new link;
        cin>>node->val;
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
}

void insert(){
    node = new link();
    cout<<"Enter the number: ";
    cin>>node->val;
    struct link* ptr = start;
   
}


void display(){
    struct link* temp = start;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    
}

int main()
{
    create();
    display();
    cout<<endl;
    cout<<"Head = "<<start->val<<endl;
    cout<<"Tail = "<<node->val<<endl;
    // sorting();
    display();
    cout<<endl;
    cout<<"Head = "<<start->val<<endl;
    cout<<"Tail = "<<node->val<<endl;
    return 0;
}








