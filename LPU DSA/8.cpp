// WAP to create single circular linked list and display all the elements.
#include<iostream>
using namespace std;
struct link{
    int data;
    struct link *next;

};
struct link *start = NULL;
struct link *current;
struct link *node;


void create(){
    int n;
    cout<<"How many nodes you want to create: ";
    cin>>n;
    cout<<"Enter the elements";
    for(int i = 0; i <n; i++){

    }
}




void display(){
    struct link *ptr = start;
    cout<<ptr->data;
    ptr = ptr->next;
    while (ptr!=start)
    {
        cout<<ptr->data;
        ptr = ptr->next;
    }
    
}


int main()
{
     
    return 0;
}