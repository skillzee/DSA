#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i =0; i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    for(int i =0; i<n;i++){
        cout<<v[i]<<" ";
    }
    reverse(v.begin(), v.end());
    int a = count(v.begin(), v.end(), 10);
    v.insert(v.begin()+2, 10);
    

     
    return 0;
}