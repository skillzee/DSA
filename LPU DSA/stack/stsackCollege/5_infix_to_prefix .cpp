/******************************************************************************
infix to prefix conversion
*******************************************************************************/

#include <iostream>
#include<string.h>
using namespace std;
char infix[10],prefix[10],stack[10];
int length,i,top=-1,pos=0;
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
void infixtoprefix(char infix[])
{
    length=strlen(infix);
    push('#');
    for(int i=length-1;i>=0;i--)
    {
        symbol=infix[i] ;
        switch(symbol)
        {
            case ')':
                    push(symbol);break;
         
            case '(': temp = pop();
                    while(temp!=')')
                    {
                    prefix[pos] = temp;
                    pos++;
                    temp = pop();
                    }
                    break;
           case '+' :
           case '-' :
           case '*' :
           case '/' :
           case '^' :
                    while(precedance(stack[top])>precedance(symbol))
                    {
                        temp=pop();
                        prefix[pos++]=temp;
                    }
                    push(symbol);
                    break;
            default : prefix[pos++]= symbol;
                    break;
        }
    }
   while (top>0)
    {
        temp = pop();
        prefix[pos++]=temp;
    }
    
}
int main()
{
    cout<<"Enter the infix expression ";
    cin>>infix;
    infixtoprefix(infix);
    cout<<"Infix Expression: "<<infix<<endl;
    cout<<"prefix Expression ";
    for(int i=strlen(prefix)-1;i>=0;i--)
    cout<<prefix[i];
    return 0;
}