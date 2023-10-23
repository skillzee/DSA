#include<iostream>
using namespace std;

void merge(int a[], int low, int mid, int high){
    int k =0;
    int n1 = mid-low+1;
    int n2 = high - mid;
    int L[n1], R[n2];
    for(int i = low; i<=mid;i++){
        L[k++] = a[i];
    }
    k = 0;
    for(int i = mid+1; i<=high; i++){
        R[k++] = a[i];
    }
    
}


void mergeSort(int a[], int low, int high){
    while(low<high){
        int mid = (low+high)/2;
        mergeSort(a, low, mid);
        mergeSort(a, mid+1, high);
        merge(a,low,mid,high);
    }

}
int main()
{

    int n;
    cout<<"Enter the range of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n ;i++){
        cin>>a[i];
    }
    mergeSort(a, 0, n-1);
    cout<<"Sorted elements are: ";
    for(int i =0; i<n; i++){
        cout<<a[i]<<" ";
    } 
     
    return 0;
}