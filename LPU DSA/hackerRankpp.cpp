#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct link{
    int data;
    link* next;
};
struct link* start = NULL;
struct link* node;
struct link* current;

void create(){
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
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
    }}
}

void insertAtpos(){
    int m;
    // cin>>m;
    link * temp = new link();
    cin>>temp->data;
    cin>>m;
    link* temp1 = start;
    current = temp1->next;
    for(int i =0; i<m-1;i++){
        temp1 = temp1->next;
        current = current->next;
    }
    temp1->next = temp;
    temp->next = current;
}

void display(){
    link* temp = start;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    create();
    insertAtpos();
    display();
    return 0;
}
