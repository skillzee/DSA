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

};

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
    // h.print();

     
    return 0;
}