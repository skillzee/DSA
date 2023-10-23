#include<iostream>
using namespace std;
struct link{
    int data;
    link* next;
};
link* node;
link* start = NULL;
link * current;


    int m;
void create(){
    cout<<"Enter the number of nodes you want to create";
    cin>>m;
    for(int i = 0; i<m;i++){
        node = new link();
        cin>>node->data;
        node->next = NULL;
        if(start == NULL){
            start = node;
            current = node;
        }
        else{
            current->next = node;
            current = node;
        }
    }
}

void removedup(){
    link* temp = start;
    current = temp->next;
    for(int i = 0; i<m-2; i++){
        if(temp->data == current->data){
            temp->next = current->next;
            current->next = NULL;
            current = temp->next;
        }
        temp = temp->next;
        current = current->next;
    }
}

void removedupunsort(){
    link* temp= start;
    current = temp->next;
    for(int i = 0; i<m-2; i++){
        current = temp->next;
    for(int j = 0; j <m-2-i; j++){
    if(current->data == temp->data){
        temp->next = current->next;
        current->next = NULL;
        current = temp->next;
        exit(0);
    }
    else{
    current = current->next;}
    }
    temp = temp->next;
      }  }
void display(){
    link* temp = start;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
  create();
  display();
  removedupunsort();
  cout<<endl;
  display();   
    return 0;
}