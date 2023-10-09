#include<bits/stdc++.h>
using namespace std;

int main(){
    int vertices=5, edges=7, source=0;
    vector<int>edge[edges];

    // edge[0]={0,1,5};
    edge[0]={0,1,7};
    edge[1]={0,2,1};
    edge[2]={0,3,2};
    edge[3]={1,2,3};
    edge[4]={1,3,5}; 
    edge[5]={1,4,1};
    edge[6]={3,4,7};

    vector<pair<int, int>>adj[vertices];
    for(int i=0; i<edges; i++){
        int u = edge[i][0];
        int v = edge[i][1];
        int d = edge[i][2];
        adj[u].push_back({v, d});
        adj[v].push_back({u, d});
    }

    for(int i=0; i<vertices; i++){
        cout << i << ": ";
        for(auto it:adj[i]){
            cout << it.first << " ";
        }
        cout<<endl;
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
    vector<int>dist(vertices, 1e9);
    dist[source]=0;
    pq.push({0, source});

    while(!pq.empty()){
        int dis = pq.top().first;
        int node= pq.top().second;
        // cout <<"top: "<< node << " " << dis <<endl;
        pq.pop();

        for(auto it:adj[node]){
            int ewt = it.second;
            int adjnode = it.first;

            // cout << adjnode <<" "<<ewt << " "<<dis<< " "<<dist[adjnode]<< endl;

            if(dist[adjnode] > dis+ewt){
                dist[adjnode] = dis+ewt;
                pq.push({dist[adjnode], adjnode});
            }
        }
    }

    for(auto it:dist){
        cout << it <<endl; 
    }
}