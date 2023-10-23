// WAP to delete the middle element of the single linked list
#include<iostream>
#include<stdlib.h>
using namespace std;
struct link
{
    int data;
    struct link *next;
};
struct link *start = NULL;
struct link *current;
struct link *node;
int n;
void create()
{
    cout<<"Enter the nodes u want to create : ";
    cin>>n;
    for(int i=0;i<n;i++){
        node = (struct link*)malloc(sizeof(struct link));
        cin>>node->data;
        node->next=NULL;
        if(start == NULL)
        {
            start = node;
            current=node;
        }
        else{
            current->next=node;
            current=node;
        }
    }
}
void delete1()
{
    struct link *ptr = start;
    current = ptr->next;
    int loc = (n/2)+1;
    for(int i=1;i<=loc-2;i++){
        ptr=ptr->next;
        current = current->next;
    }
    ptr->next = current->next;


}
void display()
{
    struct link *ptr = start;
    while(ptr!=NULL){
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