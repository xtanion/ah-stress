#include<bits/stdc++.h>
using namespace std;

bool cycle(int node, int parent, vector<int> &vis, vector<int> adj[])
{
    if (vis[node] == 1 && node == parent)
        return false;
    if (vis[node] == 1 && node != parent)
        return true;

    vis[node] = 1;
    bool ans = false;
    for (auto it : adj[node])
    {
        ans = ans | cycle(it, node, vis, adj);
    }
    return ans;
}
string cycleDetection(vector<vector<int>> &edges, int n, int m)
{
    // Write your code here.
    vector<int> adj[n];
    vector<int> vis(n, 0);
    for (int i = 0; i < edges.size(); i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == 0)
        {
            if (cycle(i, -1, vis, adj))
                return "Yes";
        }
    }
    return "No";
}
