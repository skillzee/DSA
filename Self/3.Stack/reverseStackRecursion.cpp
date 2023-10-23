#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &s, int x){
    // Base Case
    if(s.empty()){
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();

    // Recursive Call  --> Ye samajh nhi aya
    solve(s, x);

    s.push(num);
}


stack<int> pushAtBotton(stack<int> &s, int x){
    solve(s, x);
    return s;
}

void reverseStack(stack<int> &s){
    if(s.empty()){
        return;
    }

    int a = s.top();
    s.pop();

    reverseStack(s);

    pushAtBotton(s , a);


}

int main()
{

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<s.top()<<endl;
    reverseStack(s);
    cout<<s.top()<<endl;
    
     
    return 0;
}