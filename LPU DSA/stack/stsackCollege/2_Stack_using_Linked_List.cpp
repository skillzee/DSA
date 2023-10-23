#include <iostream>
using namespace std;
struct link {
   int data;
   link *next;
};
link *top=NULL, *node;

void push(int val) 
{
    node = new link();
    node->data = val;
    node->next = top;
    top = node;
}
void pop() 
{
   if(top==NULL)
   	cout<<"Stack Underflow"<<endl;
   else 
   {
      	cout<<"The popped element is "<< top->data <<endl;
      //	link *temp=top;
	top = top->next;
	//delete temp;
	//temp=NULL;
   }
}
void display() 
{
   struct link* ptr;
   if(top==NULL)
	   cout<<"stack is empty";
   else 
   {
      ptr = top;
      cout<<"Stack elements are: ";
      while (ptr != NULL) 
      {
         cout<< ptr->data <<" ";
         ptr = ptr->next;
      }
   }
  cout<<endl;
}
int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   while(1) {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            exit;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }
   return 0;
}
