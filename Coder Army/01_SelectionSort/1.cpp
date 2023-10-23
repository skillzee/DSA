// procedure  -> sabse chhota wala dhundo aur usko  1st postion mein swap krdo and repeat this method again and again till n-1 rounds if the size of the array is n kyunki jab saare ho gye hinge to last wala to automatic apni posistion pe aa jaayega

#include<iostream>
using namespace std;
int main()
{
    int arr[6] = {10, 4, 1,3, 2,7};

    for (int i = 0; i < 5; i++)
    {
        int index = i;
        for(int j = i+1; j<6; j++){
            if (arr[j]<arr[index])
            {
                index = j;
            }
            
            }
            swap(arr[i], arr[index]);
    }

    cout<<"Sorted array is: ";
    for(int i =0; i< 6; i++){
        cout<<arr[i]<<" ";
    }
    

     
    return 0;
}