// //Factorial Recursion

// #include<iostream>
// using namespace std;

// int fact(int n){
//     if(n ==1){
//         // return 1;
//     }
//     int ans = n*fact(n-1);
//     return ans;
// }

// int main()
// {
//     int res = fact(5);
//     cout<<res;

//     return 0;
// }






























#include<iostream>
using namespace std;
int main()
{

    int arr1[3] = {1,4,7};
    int arr2[4] = {2,5,8,9};

    // {1,2,4,5,7,8,9}

    int arr3[7];
    int l1 = 3;
    int l2 = 4;

    int index1 = 0;
    int index2 = 0;
    int index3 = 0;

    while(index1 < l1 && index2 < l2 ){
        if(arr1[index1]<arr2[index2]){
            arr3[index3] = arr1[index1];
            index1++;
            index3++;
        }
        else{
            arr3[index3] = arr2[index2];
            index2++;
            index3++;
        }

    }

    while(index1 < l1){
        arr3[index3] = arr1[index1];
        index1++;
        index3++;

    }

    while(index2 < l2){
        arr3[index3] = arr2[index2];
        index2++;
        index3++;

    }

    for(int i=0;i<index3;i++){
        cout<<arr3[i]<<" ";
    }
     
    return 0;
}