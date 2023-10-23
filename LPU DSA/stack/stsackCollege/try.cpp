#include<iostream>
#include<stack>
using namespace std;
int main()
{

    stack<int> st;
    stack<int> st1;
    int n;
    cin>>n;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    while (!st.empty())
    {
        if(st.top()!= 2){
            int a = st.top();
            st1.push(a);
            st.pop();
        }
        else{
            
            st.pop();
        }
    }
    while(!st1.empty()){
        int b = st1.top();
        st.push(b);
        st1.pop();

    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    
     
    return 0;
}