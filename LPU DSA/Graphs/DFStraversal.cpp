/******************************************************************************
BFS
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int i,j,n,edges,source_vert,dest_vert;
    cout<<"Enter the No of Vertices and edges: ";
    cin>>n>>edges;
    int adj[n][n];//no of vertices is always equal to no of edges.
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            adj[i][j]=0;
        }
    }
    cout<<"Enter the source and destination of all edges:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>source_vert>>dest_vert;
        adj[source_vert][dest_vert]=1;
    }
    cout<<"\nAdjacency Matris is: "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    int start,stack[n],dfs[n],top = -1,status[n],k=0;//Modification
    for(i=0;i<n;i++)
    {
        status[i]=0;
    }
    cout<<"Enter the starting vertex: ";
    cin>>start;
    top = 0;//Modification
    stack[top]=start;//Modification
    status[start]=1;
    while(top!=-1)//Modification
    {
       int w=stack[top];//Modification
       top--;//Modification
      
       status[w]=2;
        dfs[k]=w;//Modification
        k++;
       for(int a=0;a<n;a++)
       {
           if(adj[w][a]==1 && status[a]==0)
           {
               stack[++top]=a;//Modification
               //Modification
               status[a]=1;
           }
       }
    
    }
    cout<<"DFS traversal is: "<<endl;//Modification
    for(i=0;i<k;i++)
    {
        cout<<dfs[i]<<" ";
    }
    return 0;
}