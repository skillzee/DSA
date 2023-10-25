// WAP to create a MAX HEAP
#include<iostream>
using namespace std;
void maxheap(int a[], int k, int n){
    int val = a[k];
    int j = 2*k;
    while(j<=n){
        if(a[j+1]>a[j]){
            j = j+1;
        }
        if(val>a[j]){
            break;
        }
        else{
            a[k] = a[j];

        }
        
    }
    a[j/2] = val;
    return;
}

void build_heap(int a[], int n){
    int k;
    for(k = n/2; k>=1; k--){
        maxheap(a ,k ,n );
    }
}


int main()
{

    int n;
    int a[30];
    cout<<"How many nodes you wnat to craete: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i = 1; i<=n; i++){
        cin>>a[i];
    }

    build_heap(a, n);

    cout<<"MAX heap is: ";
    for(int i = 1; i<=n; i++){
        cout<<a[i];
    }

     
    return 0;
}