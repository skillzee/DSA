/******************************************************************************
*******************************************************************************/
#include <iostream>
using namespace std;
void maxheap(int a[],int k,int n)
{
    int val=a[k];
    int j=2*k+1;
    while(j<n)
    {
        if(a[j+1]>a[j])
            j=j+1;
        if(val>a[j])
            break;
        else
        {
            a[(j-1)/2]=a[j];
            j=2*j+1;
        }
    }
    a[(j-1)/2]=val;
}
void build_heap(int a[],int n)
{
    int k;
    for(k=(n/2)-1;k>=0;k--)
    {
        maxheap(a,k,n);
    }
}

void heapify(int a[], int n, int index){
    int largestIndex = index;
    int leftIndex = 2*index+1;
    int rightIndex = 2*index+2;
    if(leftIndex<n and a[leftIndex]>a[largestIndex]){
        largestIndex = leftIndex;

    }

    if(rightIndex<n and a[rightIndex]>a[largestIndex]){
        largestIndex = rightIndex;
    }

    if(largestIndex != index){
        swap(a[largestIndex], a[index]);
        heapify(a, n, largestIndex);

    }
// Hi
}

void deleteHeap(int a[], int n, int no){
    int index;
    for(int i = 0; i <n; i++){
        if(a[i] == no){
            index = i;
            break;
        }
    }

    a[index] = a[n-1];

    heapify(a, n, index);
}
int main()
{
    int a[30],n;
    cout<<"how many nodes u want to create: ";
    cin>>n;
    cout<<"Enter all elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    build_heap(a,n);
    cout<<"MAX heap is: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    int no;
    cout<<"NumberYouWantToDelete: ";

    cin>>no;
    deleteHeap(a, n, no);
    cout<<"MaxHeap after deletion: ";
    for(int i=0;i<n-1;i++)
    {
        cout<<a[i]<<" ";
    }


    return 0;
}