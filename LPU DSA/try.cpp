// You are using GCC
#include<bits/stdc++.h>
using namespace std;

struct link{
    string data;
    struct link* next;
};

struct link *start = NULL;
struct link *node;
struct link *current;



void create(){
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        node = (struct link*)malloc(sizeof(struct link));
        cin>>node->data;
        node->next = NULL;
        
        if(start == NULL){
            start = node;
            current = node;
        }
        else{
            current->next = node;
            current = node;
        }}
    

}

void display(){
    struct link* ptr = start;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }

}


void insertAtPos(){
    node = (struct link*)malloc(sizeof(struct link));
    int pos;
    cin>>pos;
    // int n1;
    cin>>node->data;


    struct link* ptr = start;
    current = ptr->next;
    // if(pos ==1){
        
    //     return;
    // }
    for(int i=1; i<pos-2; i++){
        ptr = ptr->next;
        current = current->next;
    }
    ptr->next = node;
    node->next = current;
    

}


int main(){
    create();
    
    display();
    insertAtPos();
    display();
    return 0;
}



