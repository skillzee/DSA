// WAP to accept the employee id and basic salary of emp and if DA = 20% and TA = 10 % then ,calculate the gross salary of employee. take the average of the gross salaary and print it using the double
#include<iostream>
using namespace std;
struct link{
    int empid;
    float salary;
    struct link *next;
    struct link* prev;
};
struct link *start =NULL;
struct link *current;
struct link *node;
int n;
void create()
{
    
    cout<<"How many employess are there : ";
    cin>>n;
    cout<<"Enter the employee id with basic salary: ";
    for(int i=0;i<n;i++){
        node = (struct link*)malloc(sizeof(struct link)); // node will accept 4 elements 
        cin>>node->empid;
        cin>>node->salary;
        node->next=NULL;
        node->prev=NULL;
        if(start==NULL){
            start=node;
            current=node;
        }
        else{
            current->next=node;
            node->prev=current;
            current = node;
        }
    }
}
void display()
{
    float gs, basic,da,ta,sum=0; // gross salary;
    struct link *ptr = start;
    while (ptr!=NULL)
    {
       basic = ptr->salary;
       da = basic*20/100;
        ta = basic*10/100;
        gs = basic+da+ta;
         sum = sum +gs;
        cout<<gs<<" ";
        ptr = ptr->next;
    } 
    cout<<endl;
    int avg = sum/n;
    cout<<"avg is "<<avg;
    
    
}
int main()
{
    create();
    display();
}
