// /wap to delete the nth node from double linked list
#include<iostream>
using namespace std;
struct link
{
int data;
link *prev;
link *next;
};
link *start=NULL;
link *current;
link *node;

void create()
{
int n;
cout<<"Enter the number of nodes: ";
cin>>n;
for(int i=0; i<n; i++)
{
cout<<"Enter the data: ";
node=(link *)malloc(sizeof(link));
cin>>node->data;
node->next=NULL;
node->prev=NULL;
if(start==NULL)
{
start=node;
current=node;
}
else
{
current->next = node;
node->prev = current;
current = node;
}
}
}

void display()
{
link *ptr = start;
while(ptr!=NULL)
{
cout<<ptr->data<<" ";
ptr=ptr->next;
}
}

void delete1()
{
link *ptr = current;
current = ptr->prev;
int loc;
cout<<"Enter the node from last to be deleted: ";
cin>>loc;
for(int i=1;i<loc-1;i++)
{
ptr=ptr->prev;
current = current->prev;
}
current->prev->next=ptr;
ptr->prev=current->prev;
}
int main()
{
create();
delete1();
display();
return 0;
}