#include<iostream>
using namespace std;
int main()
{
    int n, edges;
    cout<<"How many nodes and edeges: ";
    cin>>n>>edges;
    int adj[n][n];
    for(int i =0; i<n ; i++){
        for(int j=0;j<n;j++){
            adj[i][j] = 0;
        }
    }
    int start_vertex, end_vertex;
    cout<<"Enter the start vertex and end vertex of every edegs: ";
    for(int i = 0; i<edges; i++){
        cin>> start_vertex >> end_vertex;
        adj[start_vertex][end_vertex] =1;

    }
    cout<<"Adjacenecy matrix is: "<<endl;
    for(int i = 0; i<n; i++){
        for(int j =0; j<n; j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}