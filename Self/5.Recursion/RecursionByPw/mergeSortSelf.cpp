#include<iostream>
using namespace std;


void merge(int arr[], int start, int end){
    int mid= (start +end)/2;
    int len1 = mid-start+1;
    int len2 = end-mid;
    int arr1[len1];
    int arr2[len2];
    int k =start;
    for(int i =0; i<len1; i++){
        arr1[i] = arr[k++]; 
    }
    k = mid+1;
    for(int i = 0; i<len2; i++){
        arr2[i] = arr[k++];
    }

    int index1 = 0;
    int index2 = 0;
    int mainArrayIndex = start;
    while(index1<len1 and index2<len2){
        if(arr1[index1]<=arr2[index2]){
            arr[mainArrayIndex++] = arr1[index1++];
        }
        if(arr1[index1]>arr2[index2]){
            arr[mainArrayIndex++] = arr2[index2++];

        }

    }
    while(index1<len1){
        arr[mainArrayIndex++] =arr1[index1++];
    }
    while(index2<len2){
        arr[mainArrayIndex++] = arr2[index2++];
    }
    


}


void mergeSort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;

    mergeSort(arr,s, mid);
    mergeSort(arr, mid+1, e);

    merge(arr, s , e);

}

int main()
{
    int arr[5] = {2,5,1,6,9};
    int n = 5;
    mergeSort(arr, 0, n-1);

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}