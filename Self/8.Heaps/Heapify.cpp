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
            if(arr[parent] <arr[index]){
                swap(arr[parent], arr[index]);
                index =parent;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i =1; i<=size; i++){
            cout<<arr[i]<<" ";
        }
    }

    void deletefromHeap(){
        if(size == 0){
            cout<<"Nothing to delete"<<endl;
            return;
        }


        // Step 1: Put last element into first Index
        arr[1] = arr[size];

        // Step 2: Removing last element
        size--;


        // Step 3: Take Root Node to its correct Position
        int i = 1;
        while(i<size){
            int leftIndex = 2*i;
            int rightIndex = 2*i+1;
            if(leftIndex<size and arr[i]<arr[leftIndex]){
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if(rightIndex<size and arr[i]<arr[rightIndex]){

                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }

            else{
                return;
            }
        }
    }

};


void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left< n and arr[largest]< arr[left]){
        largest = left;

    }
    if(right< n and arr[largest]< arr[right]){
        largest = right;

    }

    if(largest!=i){
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }

    
}

int main()
{
    Heap h;
    // cout<<"Enter the elements you want to insert in the heap: ";
    // int n;
    // cin>>n;
    // int arr[100];
    // for(int i=0 ; i<n; i++){
    //     cin>>arr[i];
    // }

    // for(int i =0; i<n; i++ ){
    //     h.insert(arr[i]);
    // }
    // h.print();

    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();

    h.deletefromHeap();
    cout<<endl;
    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n =5;
    for(int i = 5/2; i>0; i--){
        heapify(arr,n , i);
    }

    cout<<"Printing the array: "<<endl;
    for(int i = 1; i<=n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

     
    return 0;
}