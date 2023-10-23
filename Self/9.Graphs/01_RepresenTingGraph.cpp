#include<iostream>
using namespace std;
int main()
{
    int n; //No of nodes
    int m; // No of edges
    cin>>n;
    cin>>m;
    int adj[n+1][m+1];
    for(int i = 0; i<m; i++){
        int u ,v;//edge between which two elements
        cin>>u>>v;
        adj[u][v] = 1;//Graph mein jinmein edge honge unki values ko 1 mark krdo
        adj[v][u] = 1;//Graph mein jinmein edge honge unke reverse ki values ko bhi 1 mark krdo
    }


    // This above space uses n**2 space(very costly)
    return 0;
}