// ********************************************************Sorting***************************************************************8
#include<iostream>
using namespace std;

void bubblesorting(int arr[], int size){
    int j;
    for(int k=0; k<size; k++){
    for(j= 0; j<size-1; j++){
        if(arr[j]>arr[j+1])
        swap(arr[j], arr[j+1]);

    }
    }
}



void printArray(int arr[], int size){
    cout<<"Your sorted array is: ";
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
}



void selectionsorting(int arr[], int n){
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++) {
 
    
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        if (min_idx != i)
            swap(arr[min_idx], arr[i]);
    }

}



// void selectionsorting(int arr[], int size){
 
    // for(int j = 0; j<size-1; j++){
    // for(int i = 0; i< size;i++){
        
    //     if(arr[i] >INT32_MIN){
    //         swap(arr[j], arr[i]);
    //     }
    // }
    // }

// }
int main()
{
    int a[10], n;
    cout<<"Enter the elements in your array: ";

    cin>>n;
    cout<<"Enter the elements: ";
    for(int i =0; i<n;i++){
        cin>>a[i];
    }

    // bubblesorting(a, n);


    selectionsorting(a,n);

    printArray(a,n);
    
    
    

     
    return 0;
}