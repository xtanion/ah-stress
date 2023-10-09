#include<bits/stdc++.h>
using namespace std;

bool dfs(int node, vector<vector<int>>&adj, vector<int>&vis){
    // if(vis[node]==2) return true;
    vis[node]=2;
    for(auto it: adj[node]){
        if(vis[it]==0){
            if(dfs(it, adj, vis)) return true;
        }else if(vis[it]==2) return true;
    }
    vis[node]=1;
    return false;
}

int main(){
    vector<vector<int>>adj{{}, {2}, {3}, {4,7}, {5}, {6}, {}, {5}, {9}, {10}, {8}};
    
    int m=adj.size();
    vector<int>vis(m, 0); // if not vis:0, if vis:1, if both vis & path vis:2

    for(int i=0; i<m; i++){
        if(vis[i]==0) {
            if(dfs(i, adj, vis)){
                cout << "loop exists" <<endl;
                return true;
            }
        }
    }
}