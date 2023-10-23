#include<iostream>
using namespace std;
void merge(int arr[], int low, int mid, int high){
	int i, j, k=0;
	int n1 = mid - low + 1;
	int n2 = high - mid;
	// create temp arrays
	int L[n1], R[n2];

		for(i=low;i<=mid;i++)
		{
		    L[k++]=arr[i];
		}
		k=0;
		for(i=mid+1;i<=high;i++)
		{
		    R[k++]=arr[i];
		}

	i = 0;	j = 0;	k = low;        //important
	while (i < n1 && j < n2) 
	{
		if (L[i] <= R[j]) 
		{
			arr[k++] = L[i];
			i++;
		}
		else 
		{
			arr[k++] = R[j];
			j++;
		}
		
	}
	// Copy the remaining elements of L[], if there are any
	while (i < n1) 
	{
		arr[k++] = L[i];
		i++;
	}
	// Copy the remaining elements of R[], if there are any
	while (j < n2) 
	{
		arr[k++] = R[j];
		j++;
	}
}
void mergeSort(int arr[], int low, int high){
	if (low < high) {
		int mid = (low + high)/ 2;
		mergeSort(arr, low, mid);
		mergeSort(arr, mid + 1, high);
		merge(arr, low, mid, high);
	}
}
int main()
{
	int n;
	cout<<"enter the range";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements: ";
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	mergeSort(arr, 0, n-1);
	cout<<"\nSorted array is: ";
    for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	return 0;
}

