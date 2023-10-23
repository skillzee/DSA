#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start =0;
    int end = size-1;

    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }

        //Go to right wala part
        if(key> mid){
            start = mid+1;
        }

        else{ //Key<arr[mid]
            end = mid-1;
        }

        mid = start + (end-start)/2;

        
    }
    return -1;



}

int main()
{
    /*Binary Search follows one principle:- 
    :--> The array should be completely sorted.
    */
    

    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,12,14,16};


    cout<<"For Even Array"<<endl;
    int index = binarySearch(even, 6, 12);

    cout<<"Index of 12 is: "<<index<<endl;





    cout<<"For Odd Array"<<endl;
    int indexodd = binarySearch(odd, 5, 16);
    
    cout<<"Index of 16 is: "<<indexodd<<endl;







     
    return 0;
}