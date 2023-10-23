#include<iostream>
#include<queue>
using namespace std;
int main()
{

    // Create a Queue
    queue<int> q;
    q.push(11);
    q.push(15);
    q.push(13);

    cout<<"The front element is: "<<q.front()<<endl;

    cout<<"Size of Queue is: "<<q.size()<<endl;
    q.pop();
    cout<<"Size of Queue is: "<<q.size()<<endl;
    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty."<<endl;
    }

    return 0;
}