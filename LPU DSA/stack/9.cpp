// How to evaluate one postfix expression ->z

#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;
char symbol;
char postfix[50];
int stack[50];
int n1,n2,res;
int top = -1;

void push(int value){
    top = top+1;
    stack[top] = value;
}


int pop(){
    int temp = stack[top];
    top = top-1;
    return temp;

}

int evaluate(char symb, int a, int b){
    int res;
    switch(symb){
        case '+':
        res = b+a;
        break;
        case '-':
        res = b-a;
        break;
        case '*':
        res = b*a;
        break;
        case '/':
        res = b/a;
        break;
        case '^':
        res = pow(b,a);
        break;
    }
    return res;
}




int main()
{
    cout<<"Enter the postfix Expression: ";
    cin>>postfix;
    int length = strlen(postfix);
    for(int i= 0; i<length; i++){
        symbol = postfix[i];
        if(isdigit(symbol)){
            push(symbol-'0');
        }
        else{
            n1 = pop();
            n2 = pop();
            res = evaluate(symbol, n2,n2);
            push(res);

        }
    }

    cout<<"The answer = "<<stack[top]<<endl;



    return 0;
}