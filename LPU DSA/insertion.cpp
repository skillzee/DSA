#include<iostream>
using namespace std;
int main()
{
    int a[10], n, no, po, i
;
    cout<<"Enter the range of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i =0; i<n; i++){
        cin>>a[i];
    }     
    cout<<"Enter the number and position: ";
    cin>>no;
    cin>>po;
    for(int i = n-1; i>=po; i--){
        a[i+1] = a[i];
    }

    a[po] = no;
    cout<<"The final array after insertion: ";
    for (int i = 0; i <=n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}