#include<iostream>
using namespace std;
int main()
{
    int range;
    int arr[range];
    cout<<"Enter the range of the array";    
    cin>>range;
    for (int i = 0; i < range; i++)
    {
        cin>>arr[i];
    }
    int number, index;
    cout<<"Enter the number you want to insert";
    cin>>number;
    cout<<"Enter the index you want to insert the number at";
    cin>>index;
    if(index<range){
        for(int i = range; i>=range; i--){
            arr[i]= arr[i-1];
        }
        arr[index-1] = number;
        range++;
    }
    else{
        cout<<"Index out of range";
    }

    for(int i = 0; i<range; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}