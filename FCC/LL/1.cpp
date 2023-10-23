#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
Node* head;
void InsertAtHead(int x){
    Node* temp = new Node();
    temp->data =x;
    temp->next =head;
    head = temp;

}
void Print(){
    Node* temp =head;
    cout<<"List is: ";
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
};


int main()
{
    head= NULL;
    cout<<"How many Numbers? ";
    int n, x;
    cin>>n;
    for(int i = 0; i<n; i++){
        cout<<"Enter the number: ";
        cin>>x;
        InsertAtHead(x);
        Print();
    }
     
    return 0;
}