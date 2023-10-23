#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
string infix,postfix;
int length;
int pos=0;
char symbol;
stack <char> s1;

int precedence(char symb){
	int p;
	switch(symb){
		case '^':
			p=3;
			break;
		case '/':
		case '*':
			p=2;
			break;
		case '+':
		case '-':
			p=1;
			break;
			
		case '(':
		case ')':
			p=0;
			break;
        case '#':
            p = -1;
            break;
	}
	return p;
}

void infixtopostfix(string infix){
	length=infix.size();
	s1.push('#');
	for(int i=0;i<length;i++){
        symbol = infix[i];
		switch(symbol){
			case '(':
				s1.push(symbol);break;
			case ')':
				while(s1.top()!='('){
					postfix[pos++]=s1.top();
					s1.pop();
				}
				s1.pop();
				break;
			case '*':
			case '/':
			case '+':
			case '-':
				while(precedence(s1.top())>=precedence(symbol)){
					postfix[pos++]=s1.top();
					s1.pop();
				}
				s1.push(symbol);
				break;
			default:
				postfix[pos++]=symbol;
				break;
				
		}
	}
		while(s1.top() != '#'){
			postfix[pos++]=s1.top();
			s1.pop();
	
}
	
}

int main()
{
	cout<<"Enter your infix expression: ";
	cin>>infix;
	infixtopostfix(infix);
	
	cout<<"Infix expression:"<<infix<<endl;
	cout<<"Postfix expression:"<<postfix<<endl;
	return 0;
}