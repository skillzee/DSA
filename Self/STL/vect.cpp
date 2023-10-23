#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"capacity: "<<v.capacity()<<endl;
    cout<<"size:"<<v.size()<<endl;
    v.push_back(1);
    cout<<"capacity: "<<v.capacity()<<endl;
    cout<<"size:"<<v.size()<<endl;
    v.push_back(2);
    cout<<"capacity: "<<v.capacity()<<endl;
    cout<<"size:"<<v.size()<<endl;
    v.push_back(3);
    cout<<"capacity: "<<v.capacity()<<endl;
    cout<<"size:"<<v.size()<<endl;

    cout<<"Element at 2nd index: "<<v.at(2)<<endl;
    cout<<"Front: "<<v.front()<<endl;
    cout<<"Back: "<<v.back()<<endl;

    cout<<"before pop: ";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    v.pop_back();
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}