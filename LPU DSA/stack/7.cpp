// WAp to underdtand stack using STL
#include<stack>

#include<iostream>




using namespace std;
int main()

{

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }


    return 0;
}