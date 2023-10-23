// You are using GCC
#include<bits/stdc++.h>
using namespace std;

void displayStack(stack<int> s, int n){
    for(int i =0; i<n; i++){
        int temp = s.top();
        s.pop();
        cout<<temp<<" ";
    }
}

int main(){
    stack<int> s;
    int n;
    cin>>n;
    if(n==0){
        cout<<"Stack is empty"<<endl;
    }
    else{
    for(int i =0; i<n; i++){
    int m;
    cin>>m;
    s.push(m);
    }
    
    displayStack(s,n);
    cout<<endl;
    cout<<"Top element is "<<s.top()<<endl;
    s.pop();
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
        
    }
    else{
    displayStack(s,n-1);
    cout<<"Top element is "<<s.top()<<endl;
    }
    
    
}}