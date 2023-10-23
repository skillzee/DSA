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


int main()
{

    stack<int> s;
    s.push(1);
    s.push(2)
    ;
    s.push(3);
    s.push(4);
    cout<<s.size()<<endl;

    pushAtBotton(s , 5);
    cout<<s.size()<<endl;
     
    return 0;
}