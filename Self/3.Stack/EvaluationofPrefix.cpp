#include<bits/stdc++.h>
using namespace std;

int eval(char symbol, int op1, int op2){
    int res;
    switch(symbol){
        case '+':
            res = op1+op2;
            break;
        case '-':
            res = op1 - op2;
            break;
        case '*':
            res = op1*op2;
            break;
        case '/':
            res = op1/op2;
            break;
        case '^' : 
            res=op1^op2;
            break;
    }
    return res;
}


int main()
{
     
    stack<int> st;
    cout<<"Enter the prefix expression: ";
    string prefix;
    cin>>prefix;
    for(int i = prefix.size(); i>=0 ; i--){
        char symbol = prefix[i];
        if(isdigit(symbol)){
            st.push(symbol-'0');

        }
        else{
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();
            int res = eval(symbol, op1, op2);
            st.push(res);
        }
    }
    cout<<st.top()<<endl;


    return 0;
}