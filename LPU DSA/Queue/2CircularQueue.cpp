#include <iostream>
using namespace std;
# define size 5
int cqueue[size];
int front = -1, rear = -1, n=5;
void insertCQ(int val) 
{
   if ((rear+1) % size == front) 
   {
      cout<<"Queue Overflow \n";
      return;
   }
   else if (front == -1) 
   {
      front = 0;
      rear = 0;
   } 
   else if(rear == n-1)
   {
      rear = 0;
   }
   else
   {
      rear = rear + 1;
   }
   cqueue[rear] = val ;
}
void deleteCQ() {
   if (front == -1) 
   {
      cout<<"Queue Underflow\n";
      return ;
   }
   cout<<"Element deleted from queue is : "<<cqueue[front]<<endl;

   if (front == rear) 
   {
      front = -1;
      rear = -1;
   } 
   else if(front == n-1)
   {
      front = 0;
   }
   else
   {
      front = front + 1;
   }
}
void displayCQ() 
{
    if (front == -1) 
   {
      cout<<"Queue is empty"<<endl;
      return;
   }
   cout<<"Queue elements are :\n";
   if (front <= rear) 
   {
      while (front <= rear)
      {
         cout<<cqueue[front]<<" ";
         front++;
      }
   } 
   else 
   {
      while (front <= n - 1) 
      {
         cout<<cqueue[front]<<" ";
         front++;
      }
       
      front = 0;
      while (front <= rear) 
      {
         cout<<cqueue[front]<<" ";
         front++;
      }
   }
   cout<<endl;
}
int main() {

   int ch, val;
   cout<<"1)Insert\n";
   cout<<"2)Delete\n";
   cout<<"3)Display\n";
   cout<<"4)Exit\n";
   while(1) 
   {
      cout<<"Enter choice : "<<endl;
      cin>>ch;
      switch(ch) {
         case 1:
         cout<<"Input for insertion: "<<endl;
         cin>>val;
         insertCQ(val);
         break;

         case 2:
         deleteCQ();
         break;

         case 3:
         displayCQ();
         break;

         case 4:
         exit(0);
         break;
         default: cout<<"Incorrect!\n";
      }
   } 
   return 0;
}
