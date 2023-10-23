#include<iostream>
using namespace std;
struct link{
    int data;
    link* next;
};
link* node;
// link* start = NULL;
link * current;


    int m;
void create(link* &start, link* &tail){
    cout<<"Enter the number of nodes you want to create: ";
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
            tail = node;
        }
    }
}

void display(link* &start){
    link* temp = start;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void merge(link* &start1, link* &start2, link* &tail1){
    tail1->next = start2;
    
    


}
void sort(link* start){
    link* temp = start;
    link* next1 = temp->next;
    while(next1!=NULL){
        if(temp->data > next1->data){
            swap(temp->data, next1->data);
        }
        temp = temp->next;
        next1 = next1->next;
    }
}

int main(){
    link* head1 = NULL;
    link* tail1 = NULL;
    
    create(head1, tail1);
    cout<<"The first Linked List"<<endl;
    
    display(head1);
    link* head2 = NULL;
    link * tail2 = NULL;
    create(head2, tail2);
    
    cout<<"The second LL"<<endl;
    display(head2);
    // link * head3 = NULL;
    merge(head1, head2, tail1);
    cout<<"Merged Linked List is: ";
    display(head1);
}