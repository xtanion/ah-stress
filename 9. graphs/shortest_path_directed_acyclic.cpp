#include<bits/stdc++.h>
using namespace std;

void toposort(vector<pair<int, int>>adj[], vector<int>&vis, int node, stack<int>&topo){
    vis[node]=1;
    for(auto it: adj[node]){
        int n=it.first;
        if(vis[n]!=1) toposort(adj, vis, n, topo);
    }
    topo.push(node);
}

int main(){
    int N=4, M=6, src=0;
    vector<int>edges[M];

    edges[0]={0,1,360};
    edges[1]={0,3,242};
    edges[2]={1,2,317};
    edges[3]={0,2,306};
    edges[4]={1,3,85};
    edges[5]={2,3,53};

    vector<pair<int, int>>adj[N];
    for(int i=0; i<M; i++){
        int u=edges[i][0];
        int v=edges[i][1];
        int wt=edges[i][2];
        adj[u].push_back({v, wt});
    }
    // Now, do the topo sort
    vector<int>vis(N, 0);
    stack<int>topo;
    for(int i=0; i<N; i++){
        if(vis[i]==0){
            toposort(adj, vis, i, topo);
        }
    }

    // Calculate distance
    // relax the nodes
    vector<int>dist(N, INT_MAX);
    dist[src]=0;
    while(topo.top()!=src){
        dist[topo.top()]=-1;
        topo.pop();
    }
    while(!topo.empty()){
        int node=topo.top();
        
        cout << node << " " << dist[node]<<endl;
        topo.pop();
        
        for(auto it:adj[node]){
            int v=it.first;
            int wt=it.second;
            cout << "new dist: " << dist[node]+wt<< endl;
            dist[v] = min(dist[node]+wt, dist[v]);
            cout << "v: "<< v << "dist: " << dist[v] <<endl;
        }
    }

    for(auto it:dist){
        cout << it <<endl;
    }

}