#include<iostream>
#include<stack>
using namespace std;

bool isValidParenthesis(string exp){
    stack<char> s;
    for(int i =0; i<exp.length();i++){
        char ch = exp[i];

        // If opening bracket push in stack
        // If closing bracket check stacktop and then pop

        if(ch == '{' || ch == '(' || ch == '['){
            s.push(ch);
        }
        else{
            // For Closing bracket
            if(!s.empty()){
                char top = s.top();
                if((ch == ')' && top == '(')||( ch == '}' && top=='{') || (ch == ']' && top == '[')  ){
                    s.pop();
                }
                else{
                    return false;
                }


            }
            else{
                return false;
            }  
    }


    }

    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}
int main()
{

    string s = "({{[()}]}})";
    cout<<isValidParenthesis(s)<<endl;
     
    return 0;
}