#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> qu;
    qu.push(10);//enqueue
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.pop();//dequeue
    while (!qu.empty())
    {
        cout<<qu.front()<<" ";
        qu.pop();
    }
    
     
    return 0;
}