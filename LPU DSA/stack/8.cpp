#include<iostream>
#include<string.h>
#include<stack>
using namespace std;

char infix[50], postfix[50];
stack<char> s1;
char symbol, temp;
int length, top = -1,pos = 0;


int precedence(char symb){
    int p;
    switch (symb)
    {
    case '^':
        p =3;
        break;
    case '/':
    case '*':
        p =2;
        break;
    case '+':
    case '-':
    p = 1;
    break;
    case '(':
    case ')':
    p =0;
    break;
    case '#':
    p =-1;
    break;
    default:
        break;
    }
    return p;
}

void infixToPostfix(char infix[]){
    s1.push('#');
    int length = strlen(infix);
    for(int i =0; i<length; i++){
        symbol = infix[i];
        switch (symbol)
        {
        case '(':
            s1.push(symbol);
            break;

        case ')':
        temp = s1.top();
        while(temp!='('){
            postfix[pos++] = temp;
            s1.pop();
            temp = s1.top();
        }
        s1.pop();
        break;
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
        while(precedence(s1.top())>=precedence(symbol)){
            temp = s1.top();
            s1.pop();
            postfix[pos++] = temp;
        }
        s1.push(symbol);
        break;
        
        default:
            postfix[pos++] = symbol;
            break;
        }
    }
    while(s1.size()>1){
        temp = s1.top();
        s1.pop();
        postfix[pos++] = temp;
    }
}

int main()
{
    cout<<"Enter the infix Exp: ";
    cin>>infix;
    infixToPostfix(infix);
    cout<<"Infix Expression is: "<<infix<<endl;
    cout<<"Postfix expression is: "<<postfix<<endl;
     
    return 0;
}