#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};


void insert_in_the_beginning(struct Node **head_ref, int element){
    struct Node *newnod
}



int main()
{
    struct Node* head = NULL;
    int n, element;
    cin>>n;
    for(int i = 1; i<=n; i++){
        cin>> element;
        insert_in_the_beginning(&head, element);
    }
     
    return 0;
}