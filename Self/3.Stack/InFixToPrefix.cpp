#include<bits/stdc++.h>
#include<stack>
using namespace std;
string postfix, infix, prefix;
int pos = 0;

int precedance(char ch){
    int p;
    switch(ch){
        case '^':
            p = 3;
            break;
        case '*':
        case '/':
            p = 2;
            break;
        case '+':
        case '-':
            p = 1;
            break;
        case '(':
        case ')':
            p = 0;
            break;
        default:
            p =-1;
            break;
    }
    return p;
}

string infixToPostfix(string infix){
    stack<char> s1;
    postfix = "";
    int length = infix.size();
    for(int i = 0; i<length; i++){
        char symbol = infix[i];
        switch(symbol){
            case '(' :
                s1.push('(');
                break;
            case ')' :
                while(s1.top()!='('){
                    postfix+=s1.top();
                    s1.pop();
                }
                s1.pop();
                break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                while (!s1.empty() && precedance(symbol) <= precedance(s1.top())) {
                    postfix += s1.top();
                    s1.pop();
                }
                s1.push(symbol);
                break;
            default:
                postfix+= symbol;
                break;
        }
    }
    while (!s1.empty())
    {
        postfix+= s1.top();
        s1.pop();
    }
    
}

string infixToPrefix(string infix){
    reverse(infix.begin(), infix.end());
    int length = infix.size();
    for(int i =0 ; i<length; i++){
        if(infix[i] == '('){
            infix[i] = ')';
        }
        if(infix[i] == ')'){
            infix[i] = '(';
        }

        prefix = infixToPostfix(infix);
        reverse(prefix.begin(), prefix.end());
        return prefix;
    }
}

int main()
{
    cout<<"Enter the infix expression ";
    cin>>infix;
    // infixToPostfix(infix);
    cout<<"Infix Expression: "<<infix<<endl;
    cout<<"postfix Expression "<<infixToPostfix(infix)<<endl;
    cout<<"prefix Expression "<<prefix<<endl;
     
    return 0;
}