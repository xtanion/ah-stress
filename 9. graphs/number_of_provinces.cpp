#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int>adj[], vector<int>& vis){
    vis[node]=1;    
    for(auto it: adj[node]){
        if(!vis[it]){
            dfs(it, adj, vis);
        }
    }

}

int main(){
    vector<vector<int>> isConnected{{1,1,0},{1,1,0},{0,0,1}};
    const int v = isConnected.size();
    vector<int>adj[v];
    adj[0] = {};
    for(int i=0; i<v; i++){
        vector<int> temp;
        for(int j=0; j<v; j++){
            if(isConnected[i][j]==1 && i!=j){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
        // adj[i]=temp;
    }

    vector<int>vis(v, 0);
    // cout<< vis[0] << endl;
    int ans=0;

    for(int i=0; i<v; i++){
        if(!vis[i]){
            ans++;
            dfs(i, adj, vis);
        }
    }
    cout <<"ans: "<< ans << endl;

}