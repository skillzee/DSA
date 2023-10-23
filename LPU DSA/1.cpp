#include<iostream>
using namespace std;
int main()
{
    int a[10];
    a[10] = {0};
    int n;
    cout<<"Enter the number of elements you want in your array: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the Number you want to be stored: ";
        int b;
        cin>>b;
        a[i] = b;
    }


    cout<<"The numbers in the array are: "<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    return 0;
}