///wap to accept the employee id and basic salary of an employee and if DA is 20% ans TA is 10% then, calculate the groce salary of n employees. Take average and then display it.
#include<iostream>
using namespace std;

struct link{
    int ID;
    float bs;
    struct link *next;
    struct link *prev;
};
struct link *start=NULL;
struct link *current;
struct link *node;
int n;

void create(){
    cout<<"Enter the total number of employees: ";
    cin>>n;
    cout<<"Enter all employee ID with their basic salary: "<<endl;
    for(int i=0;i<n;i++){
        node=(struct link *)malloc(sizeof(struct link)); ///dynamic create address
        cin>>node->ID;
        cin>>node->bs;
        node->prev=NULL;
        node->next=NULL;
        if(start==NULL){
            start=node;
            current=node;
        }
        else{
            current->next=node;
            node->prev=current;
            current=node;
        }
    }
}
void display(){
    float gross, basic;
    int sum=0;
    struct link *ptr=start;
    while(ptr!=NULL){
        basic=ptr->bs;
        float da=basic*20/100;
        float ta=basic*10/100;
        gross=basic+da+ta;
        sum=sum+gross;
        ptr=ptr->next;
    }
    int av=sum/n;
    cout<<"The average is: "<<av;
}

int main(){

create();
display();

return 0;
}