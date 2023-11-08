#include<iostream>
using namespace std;

int part(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(i<=high-1 && pivot>=arr[i]){
            i++;
        }
        while(j>=low+1 and pivot<arr[j]){
            j--;
        }
        if(i>j){
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);
    return j;



}

void quickSort(int arr[], int low, int high){
    if(low< high){
        int partition = part(arr, low, high);
        quickSort(arr, low, partition-1);
        quickSort(arr, partition+1, high);
    }
}

int main()
{
     
    return 0;
}