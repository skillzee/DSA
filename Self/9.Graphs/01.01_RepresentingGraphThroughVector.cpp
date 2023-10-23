// Previous technique was costly

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    int m;
    cin>>n;
    cin>>m;
    vector<int> adj[n+1];//ek number of nodes ka vector bana liya jismein mein uske adjacent nodes save kr sakunga
    for(int i = 0; i<m; i++){
        int u;//Jo do nodes ke beech edge hain vo nodes hain ye
        int v;//Jo do nodes ke beech edge hain vo nodes hain ye
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);//In Directed Graph, This line will not be required
    }
     
    return 0;
}