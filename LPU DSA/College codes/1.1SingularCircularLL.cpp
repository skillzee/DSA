#include<iostream>
using namespace std;
struct link
{
    int data;
    struct link *next;
    
};
struct link *start =NULL;
struct link *current;
struct link *node;
void create()
{
    int n;
    cout<<"How many nodes u want to create : ";
    cin>>n;
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        node = (struct link*)malloc(sizeof(struct link));
        cin>>node->data;
        if(start == NULL)
        {
            start = node;
            current = node;
            node->next=start;
        }
        else{
            current->next = node;
            node->next=start;
            current=node;
        }
    }
}
void display()
{
    struct link* ptr = start;
    cout<<ptr->data;
    ptr = ptr->next;
    while(ptr!=start){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    
}
int main()
{
    create();
    display();
}