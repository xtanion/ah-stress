#include<bits/stdc++.h>
using namespace std;

int main(){
    // vector<vector<int>>flights{{0,1,100},{1,2,100},{2,0,100},{1,3,600},{2,3,200}};
    // int n=4, src=0, dst=3, k=1;
    vector<vector<int>>flights{{0,1,5},{1,2,5},{0,3,2},{3,1,2},{1,4,1},{4,2,1}};
    int n=5, src=0, dst=2, k=2;

    vector<pair<int, int>>adj[n];
    vector<int>dist(n, 1e9);

    for(int i=0; i<flights.size();i++){
        adj[flights[i][0]].push_back({flights[i][1], flights[i][2]});
    }

    // priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
    // priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq; 
    queue<vector<int>>q;// cost, source, count
    q.push({0, src, 0});
        
    while(!q.empty()){
        int dis=q.front()[0];
        int node=q.front()[1];
        int cnt=q.front()[2];
        q.pop();
        if(cnt>k) continue;

        for(auto it:adj[node]){
            int ewt = it.second;
            int adjnode = it.first;
            cout << node << ": " << adjnode <<endl;

            if(dist[adjnode] > dis+ewt && cnt<=k){
                dist[adjnode] = dis+ewt;
                q.push({dist[adjnode], adjnode, cnt+1});
            }
        }
    }

    cout << dist[dst] <<endl;
}