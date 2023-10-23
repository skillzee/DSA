/******************************************************************************
infix expression evaluation using stack STL(standard Template Library)
*******************************************************************************/

#include <iostream>
#include<string.h>
#include<stack>
using namespace std;
char infix[10];
int result;
char symbol;

stack <int> numbers;
stack <char> operators;

int precedance(char symb)
{
    int p;
    switch(symb)
    {
    case '^': p=3;break;
    case '*':
    case '/': p =2;break;
    case '+':
    case '-': p =1;break;
    case ')':
    case '(': p =0;break;
    case '#': p =-1;break;
    }
    return p;
}
 int evaluate(int a,int b,char op)
 {
     int p;
        switch(op)
        {
            case '/':p=a/b;break;
            case '+':p=a+b;break;
            case '-':p=a-b;break;
            case '*':p=a*b;;break;
            default :p=0;
        }
        return p;
    }
void eval()
{
    int a = numbers.top();
    numbers.pop();
    int b = numbers.top();
    numbers.pop();
    int res = evaluate(b,a,operators.top());
    operators.pop();
    numbers.push(res);
}
int infixevaluation(char s[])
{
        int length=strlen(s);
        for(int i=0;i<length;i++)
        {
           symbol=s[i];
           if(symbol==' ')
           {
                continue;
           }
            else if(isdigit(symbol))
            {
                    numbers.push(symbol-'0');
            }
            else if(symbol=='(')
            {
                 operators.push(symbol);
            }
            else if(symbol==')')
            {
                 while(operators.top()!='(')
                 {
                     eval();
                 }
                 operators.pop();
            }
            else{
                    while(!operators.empty() && precedance(operators.top())>=precedance(symbol))
                    {
                        eval();
                    }
                    operators.push(symbol);
            }
        }//for loop end
        while(numbers.size()!=1)
        {
            eval();
        }
        return numbers.top();
}
int main()
{
    cout<<"Enter the infix expression ";
    cin>>infix;
    int result=infixevaluation(infix);
    cout<<"Infix Expression: "<<infix<<endl;
    cout<<"Answer :"<<result<<endl;
    return 0;
}