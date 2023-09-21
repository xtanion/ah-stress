#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>times{{2,1,1},{2,3,1},{3,4,1}};
    int n=4, k=2;

    vector<pair<int, int>>adj[n+1];
    for(int i=0; i<times.size(); i++){
        adj[times[i][0]].push_back({times[i][1], times[i][2]});
    }

    vector<int>dist(n+1, 1e9);
    priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // dist, node
    pq.push({0, k});
    dist[k]=0;

    while(!pq.empty()){
        int node=pq.top().second;
        int d = pq.top().first;
        pq.pop();

        for(auto it:adj[node]){
            int tn = it.first;
            int td = it.second;
            if(dist[tn]>d+td){
                dist[tn] = d+td;
                pq.push({d+td, tn});
            }
        }
    }

    int dmax=0;
    for(int i=1; i<=n; i++){
        cout <<i<<": "<< dist[i] <<endl;
        if(dist[i]==1e9) return -1;
        dmax = max(dmax, dist[i]);
    }
    // cout <<dmax<<endl;
    return dmax;
}