//QUICK sort Question : 10 16 8 12 15 6 3 9 5
//Link :https://www.youtube.com/watch?v=7h1s2SojIRw
#include<iostream>
using namespace std;
int x,i,j;
int partition(int a[],int low,int high)
{
int pivot= a[low];
i=low;
j=high;
while(i<j)
{
do
{
i++;
}while(a[i]<pivot);
do{
j--;
}while(a[j]>pivot);
if(i<j)
{
swap(a[i],a[j]);
}
}
swap(a[low],a[j]);
return j;
}
void Quicksort(int a[],int low,int high)
{
    if(low<high)
    {
        int j=partition(a,low,high);
        Quicksort(a,low,j);
        Quicksort(a,j+1,high);
    }
}
int main(){

cout<<"Enter the range of the array : ";
cin>>x;
int n=x+1;
int a[n];
cout<<"Enter the elements : ";
for(i=0;i<x;i++)
{
cin>>a[i];
}
a[i]=999;
Quicksort(a,0,n-1);
cout<<"Sorted array is : ";
for(i=0;i<x;i++)
{
cout<<a[i]<<" ";
}
}