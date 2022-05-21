#include<bits/stdc++.h>
#define vi vector<int>
#define pb push_back
using namespace std;

vi adj[10];
bool visited[10];

void dfs(int s)
{
    visited[s]= true;

    for (int i = 0; i<adj[s].size();i++)
    {
        if (visited[adj[s][i]]== false)
        {
            dfs(adj[s][i]);
        }
    }

}

void initialize()
{
    for (int i = 0;i<10;i++)
    {
        visited[i] = false;
    }
}

int main()
{
    int nodes, edges, x,y, cc = 0; //cc: connected components
    cin>>nodes>>edges;
    for (int i = 0; i<edges;i++)
    {
        cin>>x>>y;

        adj[x].pb(y);
        adj[y].pb(x);
    }
    initialize(); //initialize all nodes as not visited

    for (int i = 1;i<=nodes; i++)
    {
        if(visited[i] == false)
        {
            dfs(i);
            cc++;
        }
    }

    cout<<"Number of connected components :"<<cc<<endl;
    return 0;

}
