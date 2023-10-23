//Q --> Array mein harr number 2 baar de rkzha hai par we have to find the number that is occuring once
#include<iostream>
using namespace std;

int findUnique(int arr[], int size){
    int ans = 0;
    for(int i = 0; i< size; i++){
        ans = ans^arr[i]; // XOR use kiya hai yahan
    }
    return ans;
}

int main()

{




     
    return 0;
}