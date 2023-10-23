#include<iostream>
using namespace std;

void reachHome(int src, int dest){

    cout<<"Source: "<<src<<" Destination: "<<dest<<endl;

    //Base Case
    if(src == dest){
        cout<<"Reached"<<endl;
        return;
    }

    //Recursive Call
    reachHome(src+1, dest);



}
int main()
{
    int dest = 10;
    int src =1;

    reachHome(src, dest);
     
    return 0;
}