// // Binary Search

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[10];
//     int n;
//     cout<<"Enter the number of elemnets you want in your array in sorted manner: ";
//     cin>>n;
//     for(int i = 0; i<n; i++){
//         cout<<"Enter "<<i+1<<" number: ";
//         cin>>a[i];
//     }

//     int num;
//     cout<<"Enter the number you wnat to find: ";
//     cin>>num;
//     int low = 0;
//     int high = n-1;
//     int mid;
//     while(low<high){
//         mid = (low+high)/2;
//         if(a[mid] == num){
//             cout<<"The location is: "<<mid+1;
//             exit(0);

//         }
//         else if(a[mid]<num){
//             low = mid+1;
//         }
//         else if(a[mid]>num){
//             high = mid+1;
//         }

//     }
//     cout<<"Number not found";

     
//     return 0;
// }





#include<iostream>
using namespace std;
int main()
{

cout<<124%10;
    int no;
    cout<<"Enter the number: ";
    cin>>no;
    int count= 0;
    while(no%10 == 0){
        no = no%10;
        count = count+1;
    }
    cout<<count+1;

     
    return 0;
}