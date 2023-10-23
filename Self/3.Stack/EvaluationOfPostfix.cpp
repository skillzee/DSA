//solve postfix though stack 
#include<bits/stdc++.h>
using namespace std;

int eval(char i,int op1,int op2){
    if(i == '+'){
        return op2+op1;
    }
    if( i == '-'){
        return op2 - op1;
    }
    if(i == '/'){
        return op2 / op1;
    }
    if(i =='*'){
        return op2*op1;
    }
    return -1;
}

int main()
{
    string s;
    cin>>s;
    stack<int> stk;
    for(char i:s){
        if(isdigit(i)){
            stk.push((i - '0'));
        }
        else{
            int op1 = stk.top();
            stk.pop();
            int op2 = stk.top();
            stk.pop();
            int a = eval(i,op1,op2);
            stk.push(a);
        }
    }

    cout<<stk.top();
    return 0;


}