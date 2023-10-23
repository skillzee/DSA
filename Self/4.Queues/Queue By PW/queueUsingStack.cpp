#include<iostream>
#include<stack>
using namespace std;

class Queue{
    stack<int> st;

public:
    Queue(){

    }
    void push(int x){
        this->st.push(x);
    }

    void pop(){
        if(st.empty()) return;
        stack<int> temp;
        while(st.size()>1){
            temp.push(st.top());
            st.pop();
        }
        //BottomMostElement
        st.pop();
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }

    }

    bool empty(){
        return st.empty();
    }
    int front(){
        if(st.empty()) return -1;
        stack<int> temp;
        while(st.size()>1){
            temp.push(st.top());
            st.pop();
        }
        //BottomMostElement
        int res = st.top();
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
        return res;
    }
};


int main()
{
     Queue qu;
    qu.push(10);//enqueue
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.pop();//dequeue
    qu.pop();//dequeue
    while (!qu.empty())
    {
        cout<<qu.front()<<" ";
        qu.pop();
    }
     
    
    return 0;
}