#include <iostream>
#include<cstdlib>
using namespace std;
struct link
{
    int data;
    struct link *next;
};
struct link *start=NULL;
struct link *current;
struct link *node;
void create()
{

do
{
    node=(struct link *)malloc(sizeof(struct link));
    cout<<"Enter the Element : ";
    cin>>node->data;
    node->next=NULL;
    if(start==NULL)
{
    start=node;
    current=node;
}
else
{
    current->next=node;
    current=node;
}
}while(node->data > 0);
}

void display()
{
    struct link *ptr=start;
    cout<<"Elements are :"<<endl;
while(ptr!=NULL)
{
    cout<<ptr->data<<endl;
    ptr=ptr->next;
}
}
int main()
{
    create();
    display();
    return 0;
}