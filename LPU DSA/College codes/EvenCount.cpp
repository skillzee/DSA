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
void display(){
	int count=0;
	struct link *ptr = start;
	while(ptr!=NULL){
		if(ptr->data%2==0){
			count++;
		}ptr = ptr->next;
	}
	cout<<count;
}
int main(){
	create();
	display();
}
