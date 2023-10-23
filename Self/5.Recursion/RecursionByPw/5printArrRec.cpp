#include<iostream>
using namespace std;

void f(int arr[], int idx, int size){
    if(idx == size ){
        return;
    }
    cout<<arr[idx]<<" ";

    f(arr, idx+1, size);
}

int main()
{

    int size = 5;
    int arr[size] = {1,2,3,4,5};

    f(arr, 0, size);
     
    return 0;
}