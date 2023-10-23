#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;

};
Node * head;
void Insert(int data, int n){
    Node* temp =new Node();
    temp->data = data;
    temp->next = NULL;
    if(n ==1){
        temp->next = head;
        head = temp;
        return;
    }
    Node * temp2 = head;
    for(int i =0 ;i <n-2; i++){
        temp2 = temp2->next;
    }
    temp->next  = temp2->next;
    temp2->next = temp;

};
void print(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
};
int main()
{
    head = NULL;
    Insert(2,1);
    Insert(3,2);
    Insert(4,1);
    Insert(5,2);
    print();
    return 0;
}