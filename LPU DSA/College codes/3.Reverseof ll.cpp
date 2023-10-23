// WAP to access some elemnts into a double linked list and print them in reverse order;
#include<iostream>
#include<stdlib.h>
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
        }
        
    }
}
// void display(struct link *ptr = start)
// {
//     if(ptr==NULL){
//         return;
//     }
//     display(ptr->next);
//     cout<<ptr->data<<endl;   
// }
void display()
{
    struct link *ptr = current;
    while (ptr!=NULL)
    {
       cout<<ptr->data<<" ";
       ptr = ptr->prev;
    }
    
}
int main()
{
    create();
    display();
}