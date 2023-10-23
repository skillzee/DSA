#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
char infix[10],postfix[10];
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
	}
	return p;
}

string infixtopostfix(char infix[]){
	length=strlen(infix);
	s1.push('#');
	for(int i=0;i<length;i++){
		switch(symbol){
			case '(':
				s1.push(symbol);break;
			case ')':
				while(s1.top()!='#'){
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
		while(s1.top() != '#'){
			postfix[pos++]=s1.top();
			s1.pop();
	}
	return postfix;
	
}
}

int main(){
	cout<<"Enter your infix expression: ";
	cin>>infix;
	infixtopostfix(infix);
	
	cout<<"Infix expression:"<<infix<<endl;
	cout<<"Postfix expression:"<<postfix<<endl;
	return 0;
}