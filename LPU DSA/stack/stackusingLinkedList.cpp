#include<iostream>
using namespace std;

struct Link{
    int data;
    Link* next;
};
struct Link* top = NULL;
struct Link* node;


void push(){
    Link* node = new Link();
    cout<<"Enter the value";
    cin>>node->data;
    // node->data = val;
    node->next = top;
    top = node;
    


}


void pop(){
    if (top == NULL)
    {
        cout<<"Stack Underflow"<<endl;
    }
    else{
        cout<<"Deleted Element: "<<top->data<<endl;
        top = top->next;
    }
}

void display(){
    Link* ptr = top;
    if(ptr == NULL){
        cout<<"Stack is empty"<<endl;
    }
    else{
    cout<<"Satck elements are: "<<endl;
    while (ptr!=NULL)
    {
        cout<<ptr->data;
        ptr = ptr->next;
    }
    cout<<endl;
    }
    
}







int main()
{
    int ch;
    
    cout<<"1.Push 2.Pop 3.Display 4.Exit"<<endl;
    while(1){
        cout<<"Enter Your choice (1/2/3/4)"<<endl;
        cin>>ch;
        switch(ch){
            case 1: 
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            // case 4:
            // count();
            // break;
            case 4:
            exit(0);
            default:
            cout<<"Invalid choice"<<endl;
            

        }
    }
     
    return 0;
}