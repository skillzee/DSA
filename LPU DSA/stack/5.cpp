#include<iostream>
#include<string.h>
using namespace std;

char infix[50], stack[50], postfix[50];
char symbol, temp;
int length, top = -1,pos = 0;

void push(char anjali){
    top = top+1;
    stack[top] = anjali;
    

}


char pop(){
    int temp;
    temp = stack[top];
    top = top-1;
    return temp;
}


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
    push('#');
    int length = strlen(infix);
    for(int i =0; i<length; i++){
        symbol = infix[i];
        switch (symbol)
        {
        case '(':
            push(symbol);
            break;

        case ')':
        temp = pop();
        while(temp!='('){
            postfix[pos++] = temp;
            temp = pop();
        }
        break;
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
        while(precedence(stack[top])>=precedence(symbol)){
            temp = pop();
            postfix[pos++] = temp;
        }
        push(symbol);
        break;
        
        default:
            postfix[pos++] = symbol;
            break;
        }
    }
    while(top>0){
        temp = pop();
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