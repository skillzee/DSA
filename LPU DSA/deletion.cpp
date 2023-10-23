#include<iostream>
using namespace std;
int main()
{
    int a[10], b[10], n, i, j, no;
    cout<<"Enter the range of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array:";
    for(i = 0; i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the number you want to delete";
    cin>>no;
    for(i = 0; i<n; i++){
        if(a[i]!= no){
            b[j++] = a[i];
        }
    }
    if(j==n){
        cout<<"Number not found";
    }
    else{
        for(int i = 0; i<n-1;i++){
            cout<<b[i];
        }
    }
     
    return 0;
}