#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int arr2[100];
    int n, n1, temp;
    cout<<"enter the number the number of elements: ";
    cin>>n;
    for(int i=0 ; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter last elements you want to take as first: ";
    cin>>n1;
    for(int i = 0; i<n; i++){
        if(i<2){
            arr2[i] = arr[n-n1+i];
        }
        else{
            arr2[i] =arr[i-n1];
        }

    }
    for(int i = 0; i<n; i++){
        cout<<arr2[i]<<" ";
    }

   return 0;
}