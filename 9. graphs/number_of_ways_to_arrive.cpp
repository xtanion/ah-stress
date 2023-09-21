#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>roads{{0,6,7},{0,1,2},{1,2,3},{1,3,3},{6,3,3},{3,5,1},{6,5,1},{2,5,1},{0,4,5},{4,6,2}};
    int n=7;

    vector<pair<int,int>>adj[n];
    for(int i=0; i<roads.size(); i++){
        int u=roads[i][0];
        int v=roads[i][1];
        int d=roads[i][2];
        adj[u].push_back({v, d});
        adj[v].push_back({u, d});
    }

    // priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int,int>>>pq;
    queue<pair<int,int>>pq;
    vector<int>dist(n, 1e9);
    pq.push({0, 0});
    dist[0]=0;
    int count=0;

    while(!pq.empty()){
        int node = pq.front().second;
        int d = pq.front().first;
        pq.pop();

        cout << node << ": ";

        for(auto it:adj[node]){
            int t=it.first;
            int td=it.second;

            cout << t << " ";
            if(dist[t] > td+d){
                if(t==n-1) count=1;
                dist[t] = td+d;
                pq.push({dist[t], t});
            }else if(dist[t]==td+d){
                if (t==n-1) count++;
                pq.push({dist[t], t});
            }
        }
        cout <<endl;
    }

    cout << count << dist[n-1]<<endl;
}