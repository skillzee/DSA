// You are using GCC
#include <iostream>
#include <iomanip>

using namespace std;

void merge(float arr[], int left, int mid, int right) {
    int n1 = mid-left+1;
    int n2 = right-mid;
    
    int temp1[n1];
    int temp2[n2];
    
    int k =0;
    for(int i =0; i<=mid; i++){
        temp1[k++] = arr[i];
    }
    k  = 0;
    for(int i=mid+1 ;i<=right; i++){
        temp2[k++] = arr[i];
    }
    
    int index1 = 0;
    int index2 = 0;
    int mainIndex = left;
    while(index1<n1 && index2<n2){
        if(temp1[index1]<temp2[index2]){
            arr[mainIndex++] = temp1[index1++];
        }
        else{
            arr[mainIndex++] = temp2[index2++];
        }
        
        
    }
    while(index1<n1){
        arr[mainIndex++] = temp1[index1];
    }
    while(index2<n2){
        arr[mainIndex++] = temp2[index2];
    }
    
}

void mergeSort(float arr[], int left, int right) {
    if(left<right){
        int mid = (left+mid)/2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    int n;
    cin >> n;

    float arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << fixed << setprecision(2) << arr[i] << " ";
    }
    cout << endl;

    return 0;
}