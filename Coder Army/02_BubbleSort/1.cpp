// Bubble Sort -> Round1 ->one by one compare krke jo jo element bade homnge unko peeche bhejte jaao. Round2 -> firse agle last secong biggest element ke liye krenge aur aise hi n-1 rounds honge

#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"enter the elemenet";
    for(int i= 0; i<n; i++){
        cin>>arr[i];
    }

    for(int i = n-2; i>0; i--){
        // bool swapped =0;
        for(int j = 0; j<=i; j++){
            if(arr[j]>arr[j+1]){
                // swapped = 1;
                swap(arr[j], arr[j+1]);
            }
        }
        // if(swapped == 0){
        //     break;
        // }

    }

    cout<<"Sorted array is: ";
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }
     
    return 0;
}