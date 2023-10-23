// WAP from 1 to 5 using the following recursion
#include<iostream>
using namespace std;

void fun(int n){
    if(n==0) return;
    fun(n-1); cout<<n;
    

}


int main()
{
    fun(5);
     
    return 0;
}