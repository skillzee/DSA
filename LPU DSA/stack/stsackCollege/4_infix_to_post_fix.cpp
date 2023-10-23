/******************************************************************************
infix to postfix conversion
*******************************************************************************/

#include <iostream>
#include<string.h>
using namespace std;
char infix[10],postfix[10],stack[10];
int length,top=-1,pos=0;
char symbol,temp;
void push(char symbol)
{
    top=top+1;
    stack[top]=symbol;
}
char pop()
{
    char sym;
    sym=stack[top];
    top=top-1;
    return sym;
}
int precedance(char symb)
{
    int p;
    switch(symb){
    
    case '^': p=3;
            break;
    case '*':
    case '/': p =2;
            break;
    
    case '+':
    case '-': p =1;
            break;
    case ')':
    case '(': p =0;
             break;
    case '#': p =-1;
            break;
    }
    return p;
}
void infixtopostfix(char infix[])
{
    length=strlen(infix);
    push('#');
    for(int i=0;i<length;i++)
    {
        symbol=infix[i] ;
        switch(symbol)
        {
            case '(':
                    push(symbol);break;
         
            case ')': temp = pop();
                    while(temp!='(')
                    {
                    postfix[pos] = temp;
                    pos++;
                    temp = pop();
                    }
                    break;
           case '+' :
           case '-' :
           case '*' :
           case '/' :
           case '^' :
                    while(precedance(stack[top])>=precedance(symbol))
                    {
                        temp=pop();
                        postfix[pos++]=temp;
                    }
                    push(symbol);
                    break;
            default : postfix[pos++]= symbol;
                    break;
        }
    }
   while (top>0)
    {
        temp = pop();
        postfix[pos++]=temp;
    }
    
}
int main()
{
    cout<<"Enter the infix expression ";
    cin>>infix;
    infixtopostfix(infix);
    cout<<"Infix Expression: "<<infix<<endl;
    cout<<"postfix Expression "<<postfix<<endl;
    return 0;
}