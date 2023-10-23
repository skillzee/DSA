// Wrong Code//

#include<iostream>
#include<stack>
using namespace std;



int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int arr[100];
    int len = s.size();
    int mid = len/2;
    
    int count = 0;
    while(count == mid){
      if(count == mid){
        s.pop();
      }  
      int a = s.top();
      s.pop();
      count++;
      s.push(a); 
        
    }
    cout<<s.size()<<endl;
    return 0;
}