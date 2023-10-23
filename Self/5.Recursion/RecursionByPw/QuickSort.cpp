#include<iostream>
using namespace std;


int partition(int arr[], int s, int e){

    int pivot = arr[s];

    int i = s;
    int j = e;
    while(i<j){
        while(arr[i]<=pivot and i<=e-1){
            i++;
        }
        while(arr[j]>pivot and j>=s+1){
            j--;
        } 
        if(i<j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[s], arr[j]);
    return j; 

}


void quickSort(int arr[], int s, int e){

    // base Case:
    if(s>=e){
        return;
    }

    int p = partition(arr, s, e);

    // Left Part sort
    quickSort(arr, s, p-1);


    // Right wala sort
    quickSort(arr, p+1, e);

}

int main()
{
     
    int arr[5] = {2,4,1,6,5};
    int n =5;

    quickSort(arr, 0, n-1);

    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}