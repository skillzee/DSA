#include<iostream>
using namespace std;

int f(int arr[], int idx, int size){
    if(idx == size-1){
        return arr[idx];
    }

    return arr[idx] + f(arr, idx+1, size);

}

int main()
{
    int arr[] = {1,2,3,4,5};
    int size = 5;
    cout<<f(arr, 0, size);


     
    return 0;
}