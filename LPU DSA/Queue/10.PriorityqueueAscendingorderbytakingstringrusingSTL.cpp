#include <iostream>
#include <queue>
using namespace std;

int main() {

  // create a priority queue of string
 priority_queue<string, vector<string>, greater<string>> languages;       //Important

  // add items to priority_queue
  languages.push("C++");
  languages.push("Python");
  languages.push("Java");

  // get the size of queue
  int size = languages.size();
  cout << "Size of the queue: " << size<<endl;
  cout<<"The languages are"<<endl;
   while(!languages.empty()) {
    cout << languages.top() << ", ";   
    languages.pop();
  }

  return 0;
}