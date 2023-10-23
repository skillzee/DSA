#include <iostream>
using namespace std;
struct link
{
int data;
struct link *next;
};
struct link *start=NULL;
struct link *current;
struct link *node;
int n;
void create()
{
cout<<"How many nodes u want to create ";
cin>>n;
cout<<"Enter the elemnts ";
for(int i=0;i<n;i++)
{
node=(struct link *)malloc(sizeof(struct link));
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
}
}
void delete1()
{
int loc;
struct link *ptr=start;
current=ptr->next;
if(n%2==0)
loc=n/2;
else
loc=(n/2)+1;
for(int i=1;i<=loc-2;i++)
{
ptr=ptr->next;
current=current->next;
}
ptr->next=current->next;
}
void display()
{
struct link *ptr=start;
while(ptr!=NULL)
{
cout<<ptr->data;
ptr=ptr->next;
}
}
int main()
{
create();
delete1();
display();
return 0;
}