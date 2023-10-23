// given a ll with two integers m and n. delete n nodes after m nodes of a ll;
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
    int m,n;
    cout<<"Enter m :  ";
    cin>>m;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1;i<m;i++){
        ptr = ptr->next;
        current = current->next;
    }
    for(int j=1;j<n;j++){
            current = current->next;
        }ptr->next=current->next;
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