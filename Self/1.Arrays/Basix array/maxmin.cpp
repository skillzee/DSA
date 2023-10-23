#include<iostream>
using namespace std;


int getMax(int arr[], int size){
    int maxi = INT32_MIN;
    for (int i = 0; i < size; i++)
    {




        // Predefined
        maxi = max(maxi, arr[i]);

        // Humne banaya hai ye
        // if (arr[i] >maxi)
        // {
        //     maxi = arr[i];
        // }
        
    }


    // return max value
    return maxi;
    
}
int getMin(int arr[], int size){
    int mini = INT32_MAX;
    for (int i = 0; i < size; i++)
    {



        mini = min(mini, arr[i]);
        // if (arr[i] <mini)
        // {
        //     mini = arr[i];
        // }
        
    }


    // return min value
    return mini;
    
}
int main()
{
    int size;
    cin >> size;
    int num[100];
    // Taking input from user
    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }

    cout<<"The maximum value is: "<<getMax(num, size)<<endl;
    cout<<"The mimum value is: "<<getMin(num, size)<<endl;
    

    return 0;
}