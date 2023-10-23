#include<iostream>
using namespace std;

struct link{ // this is 1 node 
    int data ;
    struct link *prev;
    struct link *next;
};
struct link *start =NULL;
struct link *node;
struct link *current;
void create()
{
    int n;
    cout<<"how many nodes u want to create : ";
    cin>>n;
    cout<<"Enter all the elements :";
    for(int i=0;i<n;i++){
        node = (struct link*)malloc(sizeof(struct link)); // 
        cin>>node->data;
        node->prev=NULL;
        node->next=NULL;
        if (start == NULL)
        {
            start = node;
            current = node;
        }
        else{
               current->next = node;
               node->prev = current;
               current  = node;
            //    start = node;
        }
        
    }
}
void changePos(){
    int m;
    cout<<"Enter the pos: ";
    cin>>m;
    for(int i =0 ; i<m; i++){
        node = current->prev;
        current->next = start;
        start->prev = current;
        current->prev = NULL;
        node->next = NULL;
        start = current;
        current = node;
    }
}


void display()
{
    struct link *ptr = start;
    while (ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
    
}

int main()
{
    create();
    changePos();
    display();
     
    return 0;
}