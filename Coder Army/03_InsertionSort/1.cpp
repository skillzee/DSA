// Insertiom Sort -> second element se start kro aur usse kaho ki agar tujhe apne aage koi bada dikhe to swap hoja usse

#include<iostream>
using namespace std;
void insertionSort1(int n, int* arr) {
    int j;
    for(int i = 1; i<n; i++){
        int temp = arr[i];
        
        for(j  = i-1; j>=0; j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j]; 
                
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
        
    }
    
    

}
int main()
{
     
    return 0;
}