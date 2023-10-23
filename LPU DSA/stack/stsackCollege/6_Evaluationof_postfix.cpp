/******************************************************************************
Evaluation of Postfix
*******************************************************************************/
#include <iostream>
#include<string.h>
using namespace std;
void push (int);
int pop( );
int eval (char, int, int);
char postfix[50], symbol;
int top = -1,stack [50];
int op1,op2,res,finalvalue;
int main ()
{
   printf("enter a postfix expression:");
   cin>>postfix;
   for(int i=0; i<strlen(postfix); i++)
   {
      symbol = postfix[i];
      if (symbol>='0' && symbol<='9')   //if(isdigit(symbol))
      {
         push(symbol-'0');
      }
      else
      {
         op2 = pop ( );
         op1 = pop ( );
         res = eval (symbol, op1, op2);
         push (res);
      }
   }
   finalvalue = pop ( );
   cout<<"\n Evaluated value: "<< finalvalue;
   return 0;
}
void push (int val)
{
   top++;
   stack [top] = val;
   //cout<<" p:"<<stack[top];
}
int pop ( )
{
   int temp = stack [top];
   top--;
   return temp;
}
int eval (char symb, int op1, int op2)
{
    int res;
   switch (symb)
   {
      case '+' : res=op1+op2;break;
      case '-' : res=op1-op2;break;
      case '*' : res=op1*op2;break;
      case '/' : res=op1/op2;break;
      case '^' : res=op1^op2;break;
   }
   return res;
}

