// WAP to delete the nth node from the end of the double linked list
// start from the end
#include<iostream>
using namespace std;
struct link
{
    int data;
    struct link* next;
    struct link* prev;
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
        }
        
    }
}
void delete1()
{
    struct link * ptr = current;
    current = ptr ->prev;
    int loc;
    cout<<"Which node from end u want to delete : ";
    cin>>loc;
    for(int i=1;i<loc-2;i++){
        ptr = ptr->prev;
        current = current->prev;
    }
    current->prev->next = ptr;
    ptr->prev = current->prev;
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
    delete1();
    display();

}