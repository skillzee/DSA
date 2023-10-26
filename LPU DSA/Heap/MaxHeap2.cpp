// Create a maxHeap by taking starting index as 0;

#include<iostream>
using namespace std;

void maxHeap(int arr[], int k, int size){
    int val = k;
    int leftChild = 2*k+1;
    int rightChild = 2*k+2;
    if(arr[leftChild]>arr[val]){
        val = rightChild;
    }
    if(arr[rightChild]>val){
        val = rightChild;
    }
    if(val!=k){
        swap(arr[val],arr[k]);
        maxHeap(arr, val, size);
    }

}

void build_heap(int arr[], int size){
    int k;
    for(k =(size/2)-1; k>=0; k--){
        maxHeap(arr, k, size);
    }

}

//23 43 56 21 45 --> 56 23 45 21 43

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
    cout<<"Max Heap is: ";
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
