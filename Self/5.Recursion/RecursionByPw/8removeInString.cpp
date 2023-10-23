#include<iostream>
using namespace std;

string f(string &s,int idx, int n){

    if(idx == n){
        return "";
    }
    string curr = "";
    curr+=s[idx];
    return ((s[idx] == 'a')? "":curr);
    

}

int main()
{
     
    return 0;
}