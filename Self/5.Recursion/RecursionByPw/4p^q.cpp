#include<iostream>
using namespace std;

int power(int p, int q){
    if(q==0){
        return 1;
    }
    if(q==1){
        return p;
    }

    return p*power(p, q-1);

    

}

int main()
{
    cout<<power(17,2);
     
    return 0;
}