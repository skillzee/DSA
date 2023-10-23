#include<iostream>
#include<stdlib.h>
using namespace std;
struct link{
	int data;
	struct link *next;
};
struct link *start =NULL;
struct link *node;
struct link *current;
void create(){
	int n;
	cout<<"How many nodes u want to create :";
	cin>>n;
	cout<<"Enter the elements: ";
	for(int i=0;i<n;i++){
		node = (struct link*)malloc(sizeof(struct link));
		cin>>node->data;
		node->next =NULL;
		if(start==NULL){
			start =node;
			current = node;
		}
		else{
			current->next =node;
			current = node;
		}
}}
void insert()
{
    int loc;
    struct link *ptr = start;
    current = ptr->next;
    node = (struct link*)malloc(sizeof(struct link));
    cout<<"Enter the number and loc : ";
    cin>>node->data;
    cin>>loc;
    for(int i=0;i<loc-2;i++){
        ptr = ptr->next;
        current = current->next;
    }
    ptr->next=node;
    node->next=current;

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
    insert();
    display();
}