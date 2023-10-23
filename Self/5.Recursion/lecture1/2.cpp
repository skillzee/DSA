#include<iostream>
using namespace std;

int power(int n){
    // Base case
    if(n==0) return 1;

    //RR
    int s = power(n-1);
    int b = 2*s;

    return b;
}
int main()
{
    int n;
    cin>>n;

    int ans = power(n);
    cout<<ans<<endl;
     
    return 0;
}