#include<bits/stdc++.h>
#include "../_template.h"
using namespace std;

void dfs(int node, int vis[],
         vector<vector<int>>adj, vector<int>& ans){
    vis[node] = 1;
    cout << "node: "<< node << endl; 
    ans.push_back(node);
    for(auto it: adj[node]){
        if(!vis[it]) dfs(it, vis, adj, ans);
    }
}

int main(){

    vector<vector<int>>adj;
    adj = adjacent;

    int vis[adj.size()+1] = {0};
    // for(int i=0; i<adj.size(); i++) vis.push_back(0);

    vector<int>ans;
    // vis[0] = 1;
    cout << "starting" << endl;
    dfs(1, vis, adj, ans);

    for(auto it: ans){
        cout << it << " ";
    }
    cout <<endl;
}