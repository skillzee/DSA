#include<iostream>
using namespace std;

class Heap{
    public:
    int arr[100];
    int size;


    Heap(){
        size = 0;
        arr[0] = -1;
    }

    void insert(int val){
        size = size+1;
        int index = size;
        arr[index] = val;
        while(index>1){
            int parent = index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }


    void print(){
        for(int i = 1; i<=size; i++){
            cout<<arr[i]<<" ";
        }
    }

    void heapify(int arr[], int n, int index){
        int largest = index;
        int leftchild = index*2;
        int rightchild = index*2+1;
        if(leftchild<=n and arr[leftchild]> arr[largest]){
            largest = leftchild;
        }

        if(rightchild<=n and arr[rightchild]>arr[largest]){
            largest = rightchild;
        }

        if(largest!=index){
            swap(arr[largest], arr[index]);
            heapify(arr, n , largest);
        }

    }


    void delete1(){
    if(size < 1){
        cout << "Heap is empty. Cannot delete.";
        return;
    }
    
    arr[1] = arr[size];
    size = size - 1;
    heapify(arr, size, 1);
}

void heapSort() {
    int currentSize = size;
  while (currentSize > 1) {
    swap(arr[1], arr[currentSize]);
    currentSize--;
    heapify(arr, currentSize, 1);
  }
}
    


};



int main()
{
    Heap max_heap;
    int n;
    cout<<"Enter the number of elements you want in the MAX_HEAP";
    cin>>n;
    cout<<"Enter the eolements:";
    int a[100];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    for(int i = 0; i<n; i++){
        max_heap.insert(a[i]);
    }
    max_heap.print();
    max_heap.delete1();
    cout<<"MAX_HEAP after deletion: ";
    max_heap.print();

    cout<<"Sorted Heap is: ";
    max_heap.heapSort();
    max_heap.print();
    


     
    return 0;
}