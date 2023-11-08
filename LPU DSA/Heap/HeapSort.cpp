// WAP to delete the root from the max heap

#include<iostream>
using namespace std;

void maxHeap(int a[], int n, int k ){
    int val = a[k];
    int j = 2*k+1;
    while(j<n){
        if(j<n and a[j+1]>a[j]){
            j = j+1;
        }
        if(j<n && val>a[j]){
            break;
        }
        else{
            a[(j-1)/2] = a[j];
            j = 2*j+1;
        }
    }
    a[(j-1)/2]= val;
    return;

}


void heapify(int a[], int n, int index){
    int largeIndex = index;
    int leftIndex = 2*index+1;
    int rightIndex = 2* index +2;
    if(leftIndex<n and a[leftIndex]> a[largeIndex]){
        largeIndex = leftIndex;
    }
    if(rightIndex<n and a[rightIndex]> a[largeIndex]){
        largeIndex = rightIndex;
    }

    if(largeIndex!= index){
        swap(a[largeIndex], a[index]);
        heapify(a, n , largeIndex);
    }

}

void build_heap(int a[], int n){
    int k;
    for(k = n / 2 - 1; k >= 0; k--){
        heapify(a, n, k);
    }
}
void deleteHeap(int a[], int &n){
    int index = 0;
    a[index] = a[n-1];
    n--;
    heapify(a, n, index);
}
void heapSort(int arr[], int n){
    int size = n;
    while(size>1){
        swap(arr[size-1], arr[0]);
        size--;
        heapify(arr, size, 0);
    }
}


int main()
{
    int a[30], n;
    cout<<"How many nodes you want to create: ";
    cin>>n;
    cout<<"Enter all the elements: ";
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    build_heap(a, n);
    cout<<"MAX heap created successfully! ";
    for(int i = 0 ; i<n; i++){
        cout<<a[i]<<" ";
    }

    // deleteHeap(a, n);
    // cout<<"After deleting the root the MAX HEAP is: ";
    // for(int i = 0; i<n; i++){
    //     cout<<a[i]<<" ";
    // }

    cout<<"Sorted array is: ";
    heapSort(a, n);
    cout<<"Sorted heap is: ";
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
       
    

     
    return 0;
}