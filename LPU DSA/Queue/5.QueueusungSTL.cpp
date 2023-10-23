// CPP program to illustrate
// Implementation of push() and pop() function

#include <iostream>
#include <queue>
using namespace std;

int main()
{
	// Empty Queue
	queue<int> myqueue;
	myqueue.push(0);
	myqueue.push(1);
	myqueue.push(2);
	// queue becomes 0, 1, 2
    cout<<myqueue.back()<<" "; //print the rear end of the queue
	myqueue.pop();
	myqueue.pop();// queue becomes 2
    cout<<myqueue.size(); //1
  
	// Printing content of queue
	while (!myqueue.empty()) {
		cout << ' ' << myqueue.front();
		myqueue.pop();
	}
}
