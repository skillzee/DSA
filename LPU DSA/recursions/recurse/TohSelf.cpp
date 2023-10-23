#include<iostream>
using namespace std;

void Toh(int n, char a, char b, char c){
    if(n==1){
        cout<<"Move disc "<<n<<" from "<<a<<" to "<<c<<endl;
    }
    else{
        Toh(n-1, a,c,b);
        cout<<"Move disc "<<n<<" from "<<a<<" to "<<c<<endl;
        Toh(n-1, b,a,c);
    }
    
}

int main()
{
    int n;
    cout<<"Enter number of discs: ";
    cin>>n;
    Toh(n, 'A', 'B', 'C');

     
    return 0;
}