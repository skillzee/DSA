#include <iostream>
using namespace std;
struct link
{
int data;
struct link* next;
};
struct link *start1=NULL;
struct link *start2=NULL;
struct link *node;
struct link *current;

void create(struct link* &start)
{
int n;
cout<<"how many nodes u want to create ";
cin>>n;
cout<<"Enter all elements ";
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
void display(struct link * &start)
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

cout<<"Enter first LinkedList"<<endl;
create(start1);
cout<<"Enter second LinkedList"<<endl;
create(start2);
cout<<"Elements of linked list one: "<<endl;
display(start1);
cout<<"Elements of linked list two: "<<endl;
display(start2);
return 0;
}