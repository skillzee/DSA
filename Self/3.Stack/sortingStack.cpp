#include<iostream>
#include<stack>
using namespace std;

 
void sortedInsert(stack<int> &stack, int num){
    // Base case
    if(stack.empty() || (!stack.empty() && stack.top()<num)){
        stack.push(num);
        return;
    }

    int temp = stack.top();
    stack.pop();


    // Recursive Call
    sortedInsert(stack, num);

    stack.push(temp);
}

void sortedStack(stack<int> &stack){
    if(stack.empty()){
        return;
    }
    int num = stack.top();
    stack.pop();

    // Recursive call
    sortedStack(stack);

    sortedInsert(stack,num);

}


int main()
{
    stack<int> s;
    s.push(2);
    s.push(6);
    s.push(2);
    s.push(8);
    s.push(6);
    s.push(3);

    cout<<s.top()<<endl;
    sortedStack(s);

    cout<<s.top()<<endl;
     
    return 0;
}