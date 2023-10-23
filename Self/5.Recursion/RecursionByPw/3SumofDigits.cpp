#include<iostream>
using namespace std;

int f(int n){
    if(n>0 && n<=9){
        return n;
    }

    int last = n%10;
    int remain = n/10;

    return f(remain) +last;

}

int main()
{
    cout<<f(653);
     
    return 0;
}