/******************************************************************************
infix to prefix conversion using stack STL(standard Template Library)
*******************************************************************************/

#include <iostream>
#include<string.h>
#include<stack>
using namespace std;
char infix[10],postfix[10];
int length,i,pos=0;
char symbol,temp;
stack <char> s1;

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
    s1.push('#');
    for(int i=length-1;i>=0;i--)
    {
        symbol=infix[i] ;
        switch(symbol)
        {
            case ')':
                    s1.push(symbol);break;
         
            case '(': 
                    while(s1.top()!=')')
                    {
                    postfix[pos++] = s1.top();
                    s1.pop();
                    }
                    s1.pop();
                    break;
           case '+' :
           case '-' :
           case '*' :
           case '/' :
           case '^' :
                    while(precedance(s1.top())>precedance(symbol))
                    {
                        postfix[pos++]=s1.top();
                        s1.pop();
                        
                    }
                    s1.push(symbol);
                    break;
            default : postfix[pos++]= symbol;
                    break;
        }
        
    }
   while (!s1.empty())
    {
       if(s1.top()!='#')
       {
        postfix[pos++]=s1.top();
       }
        s1.pop();
    }
    
}
int main()
{
    cout<<"Enter the infix expression ";
    cin>>infix;
    infixtopostfix(infix);
    cout<<"Infix Expression: "<<infix<<endl;
    cout<<"prefix Expression ";
    for(int i=strlen(postfix)-1;i>=0;i--)
    {
        cout<<postfix[i];
    }
    return 0;
}