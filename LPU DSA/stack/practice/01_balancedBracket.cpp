#include<iostream>
#include<stack>
using namespace std;

bool isValid(string str){
    stack<char> s;
    for(int i = 0; i<str.size(); i++){

        char ch = str[i];//current char
        if(ch == '[' or ch == '{' or ch =='('){
            s.push(ch);
        }
        else{//closing bracket
            if(ch==')' and !s.empty() and s.top() == '('){
                s.pop();
            }
            else if(ch == '}' and !s.empty() and s.top() == '{'){
                s.pop();
            }
            else if(ch == ']' and !s.empty() and s.top() == '['){
                s.pop();
            }
            else{
                return false;
            }
        }
    }
    return s.empty();


}

int main()
{
    stack<int> s;
    string brackets = "{([{}])}";
    cout<<isValid(brackets)<<endl;


     
    return 0;
}