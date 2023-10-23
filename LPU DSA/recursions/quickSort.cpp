#include<iostream>
#include<limits.h>
using namespace std;

int partition(int a[], int low, int high){
    int pivot = a[low];
    int i =low;
    int j =high;
    while (i<j)
    {
        do
        {
            i++;
        } while (a[i]<pivot);
        do
        {
            j--;
        } while (a[j]>pivot);
        if(i<j){
            swap(a[i], a[j]);
        }
    }

    swap(a[low], a[j]);
    return j;
    
}
void quickSort(int a[], int low, int high){
    if(low<high)
    {
        int j = partition(a,low,high);
        quickSort(a,low,j);
        quickSort(a,j+1, high);
    }
}

int main()
{
    int x,i;
    cout<<"Enter the range of array: ";
    cin>>x;
    int n = x+1;
    int a[n];
    cout<<"Enter the elements: ";
    for(int i = 0; i<x; i++){
        cin>>a[i];
    }
    a[i] = 999;
    quickSort(a, 0, n-1);
    cout<<"Sorted array is: ";
    for(int j =0; j<x; j++){
        cout<<a[j];
    }


     
    return 0;
}