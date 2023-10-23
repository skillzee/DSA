// WAP to perform the push and pop operation in stack

#include<iostream>
// #include<stack>
using namespace std;
const int maxSize =10;
int top =-1;
int stack[maxSize];

void push(){
    
    int item;
    if(top==maxSize-1){
        cout<<"Overflow"<<endl;
    }
    else{
        cout<<"Enter the element: ";
        top++;
        cin>>stack[top];
    }
}

int pop(){
    if(top == -1){
        cout<<"Stack Underflow"<<endl;
    }
    cout<<"Element deleted from the top: "<<stack[top]<<endl;
    top--;
    // return top;
}

void display(){
    if(top == -1){
        cout<<"Stack is Empty"<<endl;
    }
    else{
    cout<<"Top Element: "<<stack[top];
    cout<<endl;}
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
            case 4:
            exit(0);
            default:
            cout<<"Invalid choice"<<endl;
            

        }
    }
    


    return 0;
}