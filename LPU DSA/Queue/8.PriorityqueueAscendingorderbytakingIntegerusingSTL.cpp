#include<iostream>
#include <queue>
using namespace std;

int main() {

  // create a queue of int
 priority_queue<int, vector<int>, greater<int>> numbers;       //Important

  // add items to priority_queue
  numbers.push(1);
  numbers.push(20);
  numbers.push(7);
 // cout<<numbers.top();          //will display 20
//numbers.pop();                 //will delete 20
cout<<"size="<<numbers.size()<<endl;    //ans 3
  cout << "Priority Queue: ";

  // display all elements of numbers
  while(!numbers.empty()) {
    cout << numbers.top() << ", ";   
    numbers.pop();
  }

  cout << endl;

  return 0;
}