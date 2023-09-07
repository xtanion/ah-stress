#include<bits/stdc++.h>
using namespace std;

int main(){
    //given variables
    int v=5, e=4;
    vector<int> adj[v];
    // adj = [{1, 2, 3}, {0}, {0, 4}, {0}, {2}];
    adj[0] = {1, 2, 3};
    adj[1] = {0};
    adj[2] = {0 ,4};
    adj[3] = {0};
    adj[4] = {2};

    queue<int>q;
    bool visited[v]={0};
    q.push(0);
    visited[0]=true;
    
    vector<int> bfs;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);
    
        for(auto it: adj[node]){
            if(!visited[it]){
                visited[it]=true;
                q.push(it);
            }
        }
    }

    for(auto it: bfs){
        cout << it <<endl;
    }
    return 0;
}